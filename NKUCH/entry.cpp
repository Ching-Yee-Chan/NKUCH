#include "entry.h"
#include "ui_entry.h"
#include<QMessageBox>

Entry::Entry(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Entry)
{
    ui->setupUi(this);
}

Entry::~Entry()
{
    delete ui;
}

void Entry::on_proceed_clicked()
{
    if(ui->grade->currentIndex()==0||ui->major->currentIndex()==0||ui->campus->currentIndex()==0||ui->subMajor->currentIndex()==0)
    {
        QMessageBox::warning(this,"提示","您输入的信息不全！",QMessageBox::Ok);
    }
    else
    {
        grade=ui->grade->currentIndex();
        major=ui->major->currentText();
        subMajor=ui->subMajor->currentText();
        campus=ui->campus->currentIndex()-1;
        intercampus=ui->intercampus->isChecked();
        QDialog::accept();
    }
}

void Entry::on_quit_clicked()
{
    QDialog::reject();
}

void Entry::on_major_currentIndexChanged(int index)
{
    QList<QString> subMajor;
    subMajor.append("(未选择)");
    switch(index){
    case 1:{ //数学学院
        subMajor.append("数学与应用数学");
        subMajor.append("数学(拔尖)");
        subMajor.append("数学(强基)");
        subMajor.append("信息与计算数学");
        break;
    }
    case 2:{ //物理学院
        subMajor.append("物理学");
        subMajor.append("物理(拔尖)");
        subMajor.append("物理(强基)");
        subMajor.append("应用物理学");
        subMajor.append("光电信息科学与工程");
        break;
    }
    case 3:{ //化学学院
        subMajor.append("化学");
        subMajor.append("化学(拔尖)");
        subMajor.append("化学(强基)");
        subMajor.append("应用化学");
        subMajor.append("化学生物学");
        subMajor.append("新能源科学与工程");
        subMajor.append("分子科学与工程");
        break;
    }
    case 4:{ //生科院
        subMajor.append("生物科学");
        subMajor.append("生物(拔尖)");
        subMajor.append("生物(强基)");
        subMajor.append("生物技术");
        break;
    }
    case 5:{ //环科院
        subMajor.append("环境科学");
        subMajor.append("环境工程");
        subMajor.append("资源循环科学与工程");
        subMajor.append("环境生态工程");
        break;
    }
    case 6:{ //药学院
        subMajor.append("药学");
        subMajor.append("药物化学");
        break;
    }
    case 7:{ //材料
        subMajor.append("材料物理");
        subMajor.append("材料化学");
        break;
    }
    case 8:{ //统计
        subMajor.append("统计学");
        subMajor.append("数据科学与大数据技术");
        break;
    }
    case 9:{ //医学
        subMajor.append("临床医学");
        subMajor.append("口腔医学");
        subMajor.append("智能医学工程");
        subMajor.append("眼视光医学");
        break;
    }
    case 10:{
        subMajor.append("思想政治教育");
        subMajor.append("马克思主义理论");
        break;
    }
    case 11:{
        subMajor.append("英语");
        subMajor.append("俄语");
        subMajor.append("日语");
        subMajor.append("法语");
        subMajor.append("德语");
        subMajor.append("西班牙语");
        subMajor.append("葡萄牙语");
        subMajor.append("意大利语");
        subMajor.append("阿拉伯语");
        subMajor.append("翻译");
        break;
    }
    case 12:{ //文学院
        subMajor.append("汉语言文学");
        subMajor.append("编辑出版学");
        subMajor.append("绘画");
        subMajor.append("视觉传达设计");
        subMajor.append("环境设计");
        subMajor.append("广播电视学");
        break;
    }
    case 13:{ //汉院
        subMajor.append("汉语言");
        subMajor.append("汉语言(拔尖)");
        subMajor.append("汉语言(强基)");
        subMajor.append("汉语国际教育");
        break;
    }
    case 14:{
        subMajor.append("法学");
        break;
    }
    case 15:{ //周
        subMajor.append("政治学与行政学");
        subMajor.append("行政管理");
        subMajor.append("国际政治");
        subMajor.append("社会学");
        subMajor.append("社会工作");
        subMajor.append("应用心理学");
        subMajor.append("城市管理");
        break;
    }
    case 16:{
        subMajor.append("哲学");
        subMajor.append("哲学(拔尖)");
        subMajor.append("哲学(强基)");
        subMajor.append("逻辑学");
        subMajor.append("宗教学");
        break;
    }
    case 17:{
        subMajor.append("历史学");
        subMajor.append("历史学(拔尖)");
        subMajor.append("历史学(强基)");
        subMajor.append("世界史");
        subMajor.append("文物与博物馆学");
        break;
    }
    case 18:{
        subMajor.append("经济学");
        subMajor.append("经济学(拔尖)");
        subMajor.append("经管法班");
        //subMajor.append("经济学(强基)");
        subMajor.append("国际经济与贸易");
        subMajor.append("国际商务");
        subMajor.append("财政学");
        subMajor.append("商务经济学");
        break;
    }
    case 19:{
        subMajor.append("金融学");
        subMajor.append("保险学");
        subMajor.append("金融工程");
        subMajor.append("投资学");
        subMajor.append("精算学");
        break;
    }
    case 20:{ //商学院
        subMajor.append("工商管理");
        subMajor.append("市场营销");
        subMajor.append("人力资源管理");
        subMajor.append("财务管理");
        subMajor.append("会计学");
        subMajor.append("会计学(国际会计)");
        subMajor.append("信息管理与信息系统");
        subMajor.append("工业工程");
        subMajor.append("物流管理");
        subMajor.append("图书馆学");
        subMajor.append("档案学");
        subMajor.append("电子商务");
        break;
    }
    case 21:{
        subMajor.append("旅游管理");
        subMajor.append("会展经济与管理");
        break;
    }
    case 22:{
        subMajor.append("电子科学与技术");
        subMajor.append("电子信息科学与技术");
        subMajor.append("通信工程");
        subMajor.append("微电子科学与工程");
        subMajor.append("光电信息科学与工程");
        break;
    }
    case 23:{
        subMajor.append("计算机科学与技术");
        break;
    }
    case 24:{
        subMajor.append("物联网工程");
        subMajor.append("信息安全");
        break;
    }
    case 25:{
        subMajor.append("自动化");
        subMajor.append("智能科学与技术");
        break;
    }
    case 26:{
        subMajor.append("软件工程");
        break;
    }
    }
    ui->subMajor->clear();
    for(int i=0;subMajor.size();i++){
        ui->subMajor->insertItem(i,subMajor.first());
        subMajor.pop_front();
    }
}
