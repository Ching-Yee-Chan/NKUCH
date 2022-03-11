#ifndef TEACHERSEARCH_H
#define TEACHERSEARCH_H

#include <QDialog>
#include "nkuch.h"

namespace Ui {
class TeacherSearch;
}

class TeacherSearch : public QDialog
{
    Q_OBJECT

public:
    explicit TeacherSearch(QWidget *parent = nullptr);
    ~TeacherSearch();
    void initialize(QVector<Teacher>&);
    Teacher chosen;
private slots:
    void on_buttonBox_accepted();
private:
    Ui::TeacherSearch *ui;
};

#endif // TEACHERSEARCH_H
