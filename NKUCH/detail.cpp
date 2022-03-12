#include "detail.h"
#include "ui_detail.h"

Detail::Detail(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Detail)
{
    ui->setupUi(this);
}

Detail::~Detail()
{
    delete ui;
}

void Detail::initialize(ClassInfo& course)
{
    QString text;
    text.append("课程名称：" + course.name + "\n");
    text.append("课程编号：" + course.no + "\n");
    text.append("课程代码：" + course.code + "\n");
    text.append("课程类别：" + course.courseTypeName + "\n");
    text.append("开课校区：" + course.campusName + '\n');
    text.append("学分：" + QString::number(course.credits) + "\n");
    text.append("教师：" + course.teachers + "\n");
    if(course.scheduled)
    {
        text.append("开课时间：" + QString::number(course.startWeek) + "-" + QString::number(course.endWeek) + "周\n");
        for(int i=0;i<course.arrangeSize;i++)
        {
            text.append("\t周" + weekConv(course.arrange[i].weekDay) +
                        QString::number(course.arrange[i].startUnit) + "-" + QString::number(course.arrange[i].endUnit) + "节");
            text.append("@" + course.arrange[i].rooms + '\n');
        }
        text.append("课时：" + QString::number(course.period) + "\n");
    }
    if(course.examType!="") text.append("考核方式：" + course.examType + "\n");
    if(course.gradeType!="") text.append("成绩记录方式：" + course.gradeType + "\n");
    if(course.intro!="") text.append("课程简介：" + course.intro + "\n");
    if(course.enIntro!="") text.append("英文简介：" + course.enIntro + "\n");
    if(course.goal!="") text.append("教学目标：" + course.goal + "\n");
    if(course.plan!="") text.append("教学安排：" + course.plan + "\n");
    if(course.textbooks!="") text.append("所用教材：" + course.textbooks + "\n");
    if(course.reference!="") text.append("参考文献：" + course.reference + "\n");
    if(course.suggestion!="") text.append("要求建议：" + course.suggestion + "\n");
    text.append("教学语言：" + course.langTypeName + "\n");
    text.append("人数上限：" + QString::number(course.limitCount) + "\n");
    text.append("培养计划外人数上限：" + QString::number(course.unplanLimitCount) + "\n");
    if(course.withdrawable) text.append("本课程支持期中退课");
    else text.append("本课程不支持期中退课");
    if(course.remark!="") text.append("备注：" + course.remark+ "\n");
    ui->textBrowser->append(text);
}
