#include "showresult.h"
#include "ui_showresult.h"

ShowResult::ShowResult(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowResult)
{
    ui->setupUi(this);
}

ShowResult::~ShowResult()
{
    delete ui;
}

ClassInfo ShowResult::searchClassInfo(int no)
{
    ClassInfo blank;
    if(!no||no==9999) return blank;//不上课时段
    for(course.iterator = course.begin;course.iterator!=course.end;course.iterator = course.iterator->next){
        if(course.iterator->now->no.toInt()==no){
            return *(course.iterator->now);
        }
    }
    return blank;
}

QString ShowResult::convClassInfo(const ClassInfo& info, int day, int unit)
{
    if (!info.id) return "";
    int i = 0;
    for(i=0;i<info.arrangeSize;i++){
        if(info.arrange[i].weekDay == day&&info.arrange[i].startUnit<=unit&&info.arrange[i].endUnit>=unit)//确定对应时段教室
            break;
    }
    return info.name+"("+info.no+") "+info.teachers+" "+info.arrange[i].rooms;
}

void ShowResult::refresh()
{
    ui->table->itemAt(0,0)->setText("课表"+QString::number(curPos+1));
    for(int e=0;e<7;e++){
        for(int f=0;f<14;f++){
           QString text = convClassInfo(searchClassInfo(tableList[curPos].table[e][f]), e+1, f+1);
           ui->table->item(f+1,e+1)->setText(text);
        }
    }
}

void ShowResult::initialize(const std::vector<possibleTable>& input, const ArrayForClass& courseList)
{
    course = courseList;
    tableList = input;
    ui->resCount->setText(QString::number(tableList.size()));
    ui->target->setMaximum(tableList.size());
    curPos = 0;
    //对表格进行初始化
    for(int a=0;a<15;a++) //第a行
        for(int b=0;b<8;b++){ //第b列
            QTableitem* newItem=new QTableitem;
            ui->table->setItem(a,b,newItem);
            ui->table->item(a,b)->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled); //禁止用户编辑
            ui->table->item(a,b)->setTextAlignment(Qt::AlignHCenter); // 设置文本向中心靠齐
            ui->table->item(a,b)->setTextAlignment(Qt::AlignCenter);
        }
    for(int a=1;a<15;a++) ui->table->item(a,0)->setText("第"+QString::number(a)+"节");
    for(int b=1;b<8;b++) ui->table->item(0,b)->setText("周"+weekConv(b));
    ui->table->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents); //设置自动调整表格高度
    //设置表格底色
    QColor head; head.setRgb(200,200,200);
    QColor odd; odd.setRgb(180,255,180);
    QColor even; even.setRgb(160,255,255);
    for(int a=0;a<15;a++)
        for(int b=0;b<8;b++){
            if(a==0) ui->table->item(a,b)->setBackgroundColor(head);
            else ui->table->item(a,b)->setBackgroundColor(a%2?odd:even);
        }
    //表格初始化完成
    refresh();
    show();
}
