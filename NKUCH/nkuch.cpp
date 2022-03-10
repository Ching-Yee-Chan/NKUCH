#include "nkuch.h"
#include "ui_nkuch.h"

inline QString weekConv(int a){ //数字变汉字
    switch(a){
    case 1:return "一";
    case 2:return "二";
    case 3:return "三";
    case 4:return "四";
    case 5:return "五";
    case 6:return "六";
    case 7:return "日";
    default:return "?";
    }
}

inline int campusConv(QString s){ //校区编号变整数
    if(s=="01") return 0;
    else if(s=="03") return 2;
    else if(s=="04") return 1;
    else return -1;
}

NKUCH::NKUCH(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NKUCH)
{
    ui->setupUi(this);
}

NKUCH::~NKUCH()
{
    delete ui;
}

void NKUCH::initPersonalInfo(Entry& entry)
{
    grade=entry.grade;
    major=entry.major;
    subMajor=entry.subMajor;
    campus=entry.campus;
    intercampus=entry.intercampus;
}

void NKUCH::initialize()
{
    QString temp = major+" "+subMajor+" 大"+weekConv(grade)+" ";
    switch(campus){
    case 1:{temp+="津南校区";break;}
    case 2:{temp+="泰达校区";break;}
    default:{temp+="八里台校区";break;}
    }
    ui->info->setText(temp);
    ui->intercampus->setChecked(this->intercampus);
    resExec=false;
    searchExec=false;
    entryExec=false;
}
//读取不上课时段
void NKUCH::spareTimeInit()
{

}
void NKUCH::getInfo()
{

}
void NKUCH::on_run_clicked()
{
    if(resExec){ //防止同时打开两个生成窗口
        QMessageBox::warning(this,"警告","请不要同时打开两个相同的窗口。",QMessageBox::Ok);
        return;
    }
    resExec=true;
    Loading loading; //渲染加载窗口
    loading.show();

}
