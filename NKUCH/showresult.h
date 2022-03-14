#ifndef SHOWRESULT_H
#define SHOWRESULT_H

#include <QDialog>
#include <QTableWidget>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include "algorithm.h"

typedef QTableWidgetItem QTableitem;

const QString title_front="当前的结果为第";
const QString title_rear="个结果";

namespace Ui {
class ShowResult;
}

class ShowResult : public QDialog
{
    Q_OBJECT

public:
    explicit ShowResult(QWidget *parent = nullptr);
    ~ShowResult();
    ClassInfo searchClassInfo(int no);
    QString convClassInfo(const ClassInfo& info, int day, int unit);
    void refresh();
    void initialize(const std::vector<possibleTable>& input, const ArrayForClass& courseList);
private slots:
    void on_prevRes_clicked();

    void on_nextRes_clicked();

    void on_navigate_clicked();

    void on_pushButton_clicked();

    void on_save_2_clicked();

private:
    bool outputcsv(int table[][14]);
    Ui::ShowResult *ui;
    std::vector<possibleTable> tableList;
    ArrayForClass course;
    int curPos;
};

#endif // SHOWRESULT_H
