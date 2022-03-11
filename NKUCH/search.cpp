#include "search.h"
#include "ui_search.h"

search::search(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::search)
{
    ui->setupUi(this);
}

search::~search()
{
    delete ui;
}

void search::initialize(){ //初始化
    ui->campus0->setChecked(campus0);
    ui->campus1->setChecked(campus1);
    show();
}

bool search::compare(const QString& data, const QString& key) const
{
    return data.indexOf(key)>=0||key=="";
}

bool search::compare(const QString& data, QStringList teacher) const
{
    if(teacher.empty()) return true;
    bool including=true;
    for(int i=0;i<teacher.size();i++){
        if(data.indexOf(teacher[i])<0){
            including = false;
            break;
        }
    }
    return including;
}

void search::on_run_clicked()
{
    if(ui->teacher->toPlainText()==""&&ui->name->toPlainText()==""&&ui->no->toPlainText()==""&&ui->code->toPlainText()==""){
        QMessageBox::warning(this,"提示","请输入搜索条件。",QMessageBox::Ok);
        return;
    }
    if(!campus0&&!campus1&&!campus2){
        QMessageBox::warning(this,"提示","您没有选择校区。",QMessageBox::Ok);
        return;
    }
    ui->courseList->clear();
    QString no=ui->no->toPlainText();
    QString code=ui->code->toPlainText();
    QString name=ui->name->toPlainText();
    QString teacher=ui->teacher->toPlainText();
    QStringList temp;
    bool haveRes=false;
    if(teacher.indexOf("，")>=0){
        temp = teacher.split("，");
        teacher = "";
    }
    if(teacher.indexOf(",")>=0){
        temp = teacher.split(",");
        teacher = "";
    }
     for(course.iterator=course.begin;course.iterator!=course.end;course.iterator=course.iterator->next){
        ClassInfo r=*(course.iterator->now);
        bool _cp_1=r.campusName=="津南校区";
        bool _cp_0=r.campusName=="八里台校区";
        bool _cp_2=r.campusName=="泰达校区";
        if(!((campus0 && _cp_0)||(campus1 && _cp_1)||(campus2 && _cp_2)))
            continue; //筛掉不符合校区选择条件的课程
        if(compare(r.no, no)&&compare(r.code, code)&&compare(r.name, name)&&compare(r.teachers, teacher)&&compare(r.teachers, temp))
        {
            haveRes = true;
            Qitem* obj=new Qitem;
            r.priority=ui->score->value(); //设置优先值
            obj->setData(Qt::UserRole,QVariant::fromValue(r));
            obj->setText(r.name+" "+r.no+" "+r.teachers+" "+r.campusName+" "+r.courseTypeName);
            ui->courseList->addItem(obj);
            ui->courseList->setCurrentRow(0);
        }
    }
     if(!haveRes)
        QMessageBox::warning(this,"提示","没有找到相应的课程。",QMessageBox::Ok);
}

void search::on_campus0_stateChanged(int arg1)
{
    campus0 = arg1;
}

void search::on_campus1_stateChanged(int arg1)
{
    campus1 = arg1;
}

void search::on_campus2_stateChanged(int arg1)
{
    campus2 = arg1;
}
