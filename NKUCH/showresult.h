#ifndef SHOWRESULT_H
#define SHOWRESULT_H

#include <QDialog>

namespace Ui {
class ShowResult;
}

class ShowResult : public QDialog
{
    Q_OBJECT

public:
    explicit ShowResult(QWidget *parent = nullptr);
    ~ShowResult();

private:
    Ui::ShowResult *ui;
};

#endif // SHOWRESULT_H