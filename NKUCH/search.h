#ifndef SEARCH_H
#define SEARCH_H

#include <QDialog>
#include <QMessageBox>
#include <QListWidgetItem>
#include <QStack>
#include "dataset.h"
#include "detail.h"

typedef QListWidgetItem Qitem;

namespace Ui {
class search;
}

class search : public QDialog
{
    Q_OBJECT

public:
    explicit search(QWidget *parent = nullptr);
    ~search();
    void initialize();
    bool campus0; //八里台
    bool campus1; //津南
    bool campus2; //泰达
    bool intercampus;
    ArrayForClass course;
    QStack<ClassInfo> res;

private slots:
    void on_run_clicked();

    void on_campus0_stateChanged(int arg1);

    void on_campus1_stateChanged(int arg1);

    void on_campus2_stateChanged(int arg1);

    void on_result_clicked();

    void on_cancel_clicked();

    void on_courseList_itemDoubleClicked(QListWidgetItem *item);

private:
    bool compare(const QString& a, const QString& b) const;
    bool compare(const QString& data, QStringList teacher) const;
    Ui::search *ui;
};

#endif // SEARCH_H
