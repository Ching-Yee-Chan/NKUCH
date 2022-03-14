#ifndef SHOWRESULT_H
#define SHOWRESULT_H

#include <QDialog>
#include <QTableWidget>
#include "algorithm.h"

typedef QTableWidgetItem QTableitem;

namespace Ui {
class ShowResult;
}

class ShowResult : public QDialog
{
    Q_OBJECT

public:
    explicit ShowResult(QWidget *parent = nullptr);
    ~ShowResult();
    ClassInfo searchClassInfo(int code);
    QString convClassInfo(const ClassInfo& info, int day, int unit);
    void refresh();
    void initialize(const std::vector<possibleTable>& input, const ArrayForClass& courseList);
private:
    Ui::ShowResult *ui;
    std::vector<possibleTable> tableList;
    ArrayForClass course;
    int curPos;
};

#endif // SHOWRESULT_H
