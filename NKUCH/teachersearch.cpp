#include "teachersearch.h"
#include "ui_teachersearch.h"

TeacherSearch::TeacherSearch(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TeacherSearch)
{
    ui->setupUi(this);
}

TeacherSearch::~TeacherSearch()
{
    delete ui;
}

void TeacherSearch::initialize(QVector<Teacher>& teachers)
{
    for(int i=0;i<teachers.size();i++){
        Qitem* obj=new Qitem;
        obj->setData(Qt::UserRole,QVariant::fromValue(teachers[i]));
        obj->setText(teachers[i].name+" "+teachers[i].dept+" "+teachers[i].teacherId);
        ui->teacherList->addItem(obj);
        ui->teacherList->setCurrentRow(0);
    }
}

void TeacherSearch::on_buttonBox_accepted()
{
    if(!ui->teacherList->selectedItems().empty()){
        chosen = ui->teacherList->currentItem()->data(Qt::UserRole).value<Teacher>();
    }
    else QMessageBox::warning(this, "提示", "请选择教师");
}
