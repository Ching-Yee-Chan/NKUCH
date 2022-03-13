#ifndef NKUCH_H
#define NKUCH_H

#include <QWidget>
#include <QMainWindow>
#include <QMessageBox>
#include "loading.h"
#include "entry.h"
#include "dataset.h"
#include "search.h"
#include "teachersearch.h"
#include "algorithm.h"
#include <QVector>
#include <QListWidgetItem>
#include <stack>

typedef QListWidgetItem Qitem;


const QString A_COURSE="通识必修课程";
const QString B_COURSE="大类基础课程";
const QString C_COURSE="专业必修课程";
const QString D_COURSE="专业选修课程";
const QString E_COURSE="通识选修课程";

namespace Ui {
class NKUCH;
}

class NKUCH : public QMainWindow
{
    Q_OBJECT
    friend class algorithm;
public:
    explicit NKUCH(QWidget *parent = nullptr);
    ~NKUCH();
    void initialize();
    void initPersonalInfo(Entry& entry);
    ArrayForClass course; //全体课程！
private slots:
    void on_run_clicked();

    void on_majorPush_clicked();

    void on_majorPop_clicked();

    void on_majorRate_clicked();

    void on_teacherPush_clicked();

    void on_teacherRate_clicked();

    void on_teacherPop_clicked();

    void on_exceptionPush_clicked();

    void on_exceptionPop_clicked();

    void on_exceptionClear_clicked();

    void on_exceptionWeekend_clicked();

    void on_exceptionNoon_clicked();

    void on_exceptionNight_clicked();

    void on_exceptionMorning_clicked();

    void on_search_clicked();

    void on_courseRate_clicked();

    void on_coursePop_clicked();

    void on_maximum_valueChanged(int arg1);

    void on_minimum_valueChanged(int arg1);

    void on_start_currentIndexChanged(int index);

    void on_end_currentIndexChanged(int index);

    void on_cancel_clicked();

    void on_reChoose_clicked();

    void on_intercampus_stateChanged(int arg1);

private:
    void getPrefMajor();
    void getPrefTeacher();
    void spareTimeInit();
    void getCourseList();
    void getInfo();
    void noClassInRange(int begin, int end);
    void costTableInit();
    Ui::NKUCH *ui;
    int grade;
    QString major;
    QString subMajor;
    int campus; //0是八里台，1是津南，2是泰达
    bool intercampus; //跨校区选课
    bool resExec; //结果窗口是否打开
    bool entryExec; //重新选择窗口是否打开
    bool searchExec; //搜索窗口是否打开
    std::vector<std::vector<ClassInfo>> majorList;
    std::vector<ClassInfo> minorList;
    int costTable[7][14];
};
#endif // NKUCH_H
