#ifndef NKUCH_H
#define NKUCH_H

#include <QMainWindow>

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
    int grade;
    QString major;
    QString subMajor;
    int campus; //0是八里台，1是津南，2是泰达
    bool intercampus; //跨校区选课
    bool resExec; //结果窗口是否打开
    bool entryExec; //重新选择窗口是否打开
    bool searchExec; //搜索窗口是否打开
private:
    Ui::NKUCH *ui;
};

#endif // NKUCH_H
