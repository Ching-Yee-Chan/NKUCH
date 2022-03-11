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
#include <QVector>
#include <QListWidgetItem>
#include <stack>

typedef QListWidgetItem Qitem;

namespace Ui {
class NKUCH;
}

class NKUCH : public QMainWindow
{
    Q_OBJECT

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

private:
    void spareTimeInit();
    void getInfo();
    void noClassInRange(int begin, int end);
    Ui::NKUCH *ui;
    int grade;
    QString major;
    QString subMajor;
    int campus; //0是八里台，1是津南，2是泰达
    bool intercampus; //跨校区选课
    bool resExec; //结果窗口是否打开
    bool entryExec; //重新选择窗口是否打开
    bool searchExec; //搜索窗口是否打开
};
#endif // NKUCH_H
