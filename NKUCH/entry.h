#ifndef ENTRY_H
#define ENTRY_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class Entry; }
QT_END_NAMESPACE

class Entry : public QDialog
{
    Q_OBJECT

public:
    Entry(QWidget *parent = nullptr);
    ~Entry();
    int grade;
    QString major;
    QString subMajor;
    int campus; //0是八里台，1是津南，2是泰达
    bool intercampus; //跨校区选课

private slots:
    void on_proceed_clicked();

    void on_quit_clicked();

    void on_major_currentIndexChanged(int index);

private:
    Ui::Entry *ui;
};
#endif // ENTRY_H
