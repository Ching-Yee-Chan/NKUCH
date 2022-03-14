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
//保存为CSV文件=================================================================================================
bool ShowResult::outputcsv(int table[][14]) //输出csv表格的函数，如果返回true则输出成功
{
    QString filename=ui->filename->toPlainText()+".csv"; //设置文件名
    QFile outfile(filename);
    outfile.open(QFile::WriteOnly|QFile::Truncate);   //创建csv文件并开始写入课程信息
    QTextStream out(&outfile);
    QString newline, comma = ",", enter = "\n",
            title= "序号,课时,课程代码,课程名称,开课校区,学分,课程序号,课程类型,教师,备注\n";
    out << title;
    int temp[7 * 14], var = -1, linenum = 0;
    for (int i = 1; i <= 7; i++)
        for (int j = 1; j <= 14; j++)
            if (table[i - 1][j - 1]){
                for(course.iterator = course.begin;course.iterator!=course.end;course.iterator = course.iterator->next)
                    if (table[i - 1][j - 1] == course.iterator->now->no.toInt())
                    {
                        var++;
                        temp[var] = course.iterator->now->id;
                        for (int k = 0; k <= var - 1; k++)
                            if (temp[k] == temp[var])
                                break;
                        linenum++;
                        QString time="周"+weekConv(i)+" 第"+QString::number(j)+"节课";
                        out << linenum << comma;                                  //序号
                        out << time << comma;
                        out << course.iterator->now->code << comma;                 //课程代码
                        out << course.iterator->now->name << comma;                 //课程名称
                        out << course.iterator->now->campusName << comma;           //开课校区
                        out << course.iterator->now->credits << comma;              //学分
                        out << course.iterator->now->no << comma;                   //课程序号
                        out << course.iterator->now->courseTypeName << comma;       //课程类型
                        out << course.iterator->now->teachers << comma;             //教师
                        out << course.iterator->now->remark << enter;               //备注
                        break;
                    }
            }
    return true;
}
//界面响应函数======================================================================================
void ShowResult::on_prevRes_clicked()
{
    curPos=curPos?curPos-1:tableList.size()-1;
    ui->title->setText(title_front+QString::number(curPos+1)+title_rear);
    refresh();
}

void ShowResult::on_nextRes_clicked()
{
    curPos=(curPos==tableList.size()-1)?0:curPos+1;
    ui->title->setText(title_front+QString::number(curPos+1)+title_rear);
    refresh();
}

void ShowResult::on_navigate_clicked()
{
    curPos=ui->target->value()-1;
    ui->title->setText(title_front+QString::number(curPos+1)+title_rear);
    refresh();
}

void ShowResult::on_pushButton_clicked()
{
    QDialog::reject();
}

void ShowResult::on_save_2_clicked()
{
    QString filename=ui->filename->toPlainText();
    if(filename=="") {QMessageBox::warning(this,"注意","文件名不能为空",QMessageBox::Ok);return;}
    bool success=outputcsv(tableList[curPos].table);
    if(success) QMessageBox::warning(this,"提示","csv文件已成功生成至根目录下。",QMessageBox::Ok);
}
