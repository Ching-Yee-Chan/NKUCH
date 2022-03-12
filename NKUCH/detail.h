#ifndef DETAIL_H
#define DETAIL_H

#include <QDialog>
#include <dataset.h>

namespace Ui {
class Detail;
}

class Detail : public QDialog
{
    Q_OBJECT

public:
    explicit Detail(QWidget *parent = nullptr);
    ~Detail();
    void initialize(ClassInfo&);

private:
    Ui::Detail *ui;
};

#endif // DETAIL_H
