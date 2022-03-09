#include "entry.h"
#include "nkuch.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Entry entry;
    entry.show();
    if(entry.exec()==QDialog::Accepted){
        NKUCH ch;
        ch.grade=entry.grade;
        ch.major=entry.major;
        ch.subMajor=entry.subMajor;
        ch.campus=entry.campus;
        ch.intercampus=entry.intercampus;
        entry.close();
        ch.initialize();
        ch.show();
        return a.exec();
    }
    else{
        return a.exec();
    }
}
