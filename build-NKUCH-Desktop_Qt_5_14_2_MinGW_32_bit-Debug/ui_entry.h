/********************************************************************************
** Form generated from reading UI file 'entry.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRY_H
#define UI_ENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Entry
{
public:
    QComboBox *grade;
    QComboBox *major;
    QComboBox *campus;
    QPushButton *proceed;
    QLineEdit *title;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QCheckBox *intercampus;
    QPushButton *quit;
    QLineEdit *lineEdit_5;
    QComboBox *subMajor;

    void setupUi(QWidget *Entry)
    {
        if (Entry->objectName().isEmpty())
            Entry->setObjectName(QString::fromUtf8("Entry"));
        Entry->setEnabled(true);
        Entry->resize(539, 343);
        Entry->setCursor(QCursor(Qt::ArrowCursor));
        Entry->setAutoFillBackground(true);
        grade = new QComboBox(Entry);
        grade->addItem(QString());
        grade->addItem(QString());
        grade->addItem(QString());
        grade->addItem(QString());
        grade->addItem(QString());
        grade->setObjectName(QString::fromUtf8("grade"));
        grade->setGeometry(QRect(220, 70, 201, 31));
        major = new QComboBox(Entry);
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->addItem(QString());
        major->setObjectName(QString::fromUtf8("major"));
        major->setGeometry(QRect(220, 120, 201, 31));
        campus = new QComboBox(Entry);
        campus->addItem(QString());
        campus->addItem(QString());
        campus->addItem(QString());
        campus->setObjectName(QString::fromUtf8("campus"));
        campus->setGeometry(QRect(220, 220, 201, 31));
        proceed = new QPushButton(Entry);
        proceed->setObjectName(QString::fromUtf8("proceed"));
        proceed->setGeometry(QRect(430, 300, 93, 28));
        proceed->setCheckable(false);
        title = new QLineEdit(Entry);
        title->setObjectName(QString::fromUtf8("title"));
        title->setEnabled(true);
        title->setGeometry(QRect(50, 10, 451, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\344\270\255\345\256\213"));
        font.setPointSize(16);
        title->setFont(font);
        title->setCursor(QCursor(Qt::BlankCursor));
        title->setMouseTracking(false);
        title->setAutoFillBackground(false);
        title->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        title->setFrame(false);
        title->setReadOnly(true);
        lineEdit_2 = new QLineEdit(Entry);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setGeometry(QRect(100, 70, 71, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font1.setPointSize(10);
        lineEdit_2->setFont(font1);
        lineEdit_2->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_2->setMouseTracking(false);
        lineEdit_2->setAutoFillBackground(false);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_2->setFrame(false);
        lineEdit_2->setReadOnly(true);
        lineEdit_3 = new QLineEdit(Entry);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(true);
        lineEdit_3->setGeometry(QRect(100, 120, 71, 31));
        lineEdit_3->setFont(font1);
        lineEdit_3->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_3->setMouseTracking(false);
        lineEdit_3->setAutoFillBackground(false);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_3->setFrame(false);
        lineEdit_3->setReadOnly(true);
        lineEdit_4 = new QLineEdit(Entry);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setEnabled(true);
        lineEdit_4->setGeometry(QRect(100, 220, 71, 31));
        lineEdit_4->setFont(font1);
        lineEdit_4->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_4->setMouseTracking(false);
        lineEdit_4->setAutoFillBackground(false);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_4->setFrame(false);
        lineEdit_4->setReadOnly(true);
        intercampus = new QCheckBox(Entry);
        intercampus->setObjectName(QString::fromUtf8("intercampus"));
        intercampus->setGeometry(QRect(200, 280, 131, 21));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font2.setPointSize(9);
        intercampus->setFont(font2);
        intercampus->setChecked(false);
        quit = new QPushButton(Entry);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(20, 300, 93, 28));
        quit->setCheckable(false);
        lineEdit_5 = new QLineEdit(Entry);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setEnabled(true);
        lineEdit_5->setGeometry(QRect(100, 170, 71, 31));
        lineEdit_5->setFont(font1);
        lineEdit_5->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_5->setMouseTracking(false);
        lineEdit_5->setAutoFillBackground(false);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_5->setFrame(false);
        lineEdit_5->setReadOnly(true);
        subMajor = new QComboBox(Entry);
        subMajor->addItem(QString());
        subMajor->setObjectName(QString::fromUtf8("subMajor"));
        subMajor->setGeometry(QRect(220, 170, 201, 31));

        retranslateUi(Entry);

        QMetaObject::connectSlotsByName(Entry);
    } // setupUi

    void retranslateUi(QWidget *Entry)
    {
        Entry->setWindowTitle(QCoreApplication::translate("Entry", "\345\215\227\345\274\200\345\244\247\345\255\246\346\234\254\347\247\221\347\224\237\351\200\211\350\257\276\345\212\251\346\211\213", nullptr));
        grade->setItemText(0, QCoreApplication::translate("Entry", "(\346\234\252\351\200\211\346\213\251)", nullptr));
        grade->setItemText(1, QCoreApplication::translate("Entry", "\345\244\247\344\270\200", nullptr));
        grade->setItemText(2, QCoreApplication::translate("Entry", "\345\244\247\344\272\214", nullptr));
        grade->setItemText(3, QCoreApplication::translate("Entry", "\345\244\247\344\270\211", nullptr));
        grade->setItemText(4, QCoreApplication::translate("Entry", "\345\244\247\345\233\233", nullptr));

        major->setItemText(0, QCoreApplication::translate("Entry", "(\346\234\252\351\200\211\346\213\251)", nullptr));
        major->setItemText(1, QCoreApplication::translate("Entry", "\346\225\260\345\255\246\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        major->setItemText(2, QCoreApplication::translate("Entry", "\347\211\251\347\220\206\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        major->setItemText(3, QCoreApplication::translate("Entry", "\345\214\226\345\255\246\345\255\246\351\231\242", nullptr));
        major->setItemText(4, QCoreApplication::translate("Entry", "\347\224\237\345\221\275\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        major->setItemText(5, QCoreApplication::translate("Entry", "\347\216\257\345\242\203\347\247\221\345\255\246\344\270\216\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        major->setItemText(6, QCoreApplication::translate("Entry", "\350\215\257\345\255\246\351\231\242", nullptr));
        major->setItemText(7, QCoreApplication::translate("Entry", "\346\235\220\346\226\231\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        major->setItemText(8, QCoreApplication::translate("Entry", "\347\273\237\350\256\241\344\270\216\346\225\260\346\215\256\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        major->setItemText(9, QCoreApplication::translate("Entry", "\345\214\273\345\255\246\351\231\242", nullptr));
        major->setItemText(10, QCoreApplication::translate("Entry", "\351\251\254\345\205\213\346\200\235\344\270\273\344\271\211\345\255\246\351\231\242", nullptr));
        major->setItemText(11, QCoreApplication::translate("Entry", "\345\244\226\345\233\275\350\257\255\345\255\246\351\231\242", nullptr));
        major->setItemText(12, QCoreApplication::translate("Entry", "\346\226\207\345\255\246\351\231\242", nullptr));
        major->setItemText(13, QCoreApplication::translate("Entry", "\346\261\211\350\257\255\350\250\200\346\226\207\345\214\226\345\255\246\351\231\242", nullptr));
        major->setItemText(14, QCoreApplication::translate("Entry", "\346\263\225\345\255\246\351\231\242", nullptr));
        major->setItemText(15, QCoreApplication::translate("Entry", "\345\221\250\346\201\251\346\235\245\346\224\277\345\272\234\347\256\241\347\220\206\345\255\246\351\231\242", nullptr));
        major->setItemText(16, QCoreApplication::translate("Entry", "\345\223\262\345\255\246\351\231\242", nullptr));
        major->setItemText(17, QCoreApplication::translate("Entry", "\345\216\206\345\217\262\345\255\246\351\231\242", nullptr));
        major->setItemText(18, QCoreApplication::translate("Entry", "\347\273\217\346\265\216\345\255\246\351\231\242", nullptr));
        major->setItemText(19, QCoreApplication::translate("Entry", "\351\207\221\350\236\215\345\255\246\351\231\242", nullptr));
        major->setItemText(20, QCoreApplication::translate("Entry", "\345\225\206\345\255\246\351\231\242", nullptr));
        major->setItemText(21, QCoreApplication::translate("Entry", "\346\227\205\346\270\270\344\270\216\346\234\215\345\212\241\345\255\246\351\231\242", nullptr));
        major->setItemText(22, QCoreApplication::translate("Entry", "\347\224\265\345\255\220\344\277\241\346\201\257\344\270\216\345\205\211\345\255\246\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        major->setItemText(23, QCoreApplication::translate("Entry", "\350\256\241\347\256\227\346\234\272\345\255\246\351\231\242", nullptr));
        major->setItemText(24, QCoreApplication::translate("Entry", "\347\275\221\347\273\234\347\251\272\351\227\264\345\256\211\345\205\250\345\255\246\351\231\242", nullptr));
        major->setItemText(25, QCoreApplication::translate("Entry", "\344\272\272\345\267\245\346\231\272\350\203\275\345\255\246\351\231\242", nullptr));
        major->setItemText(26, QCoreApplication::translate("Entry", "\350\275\257\344\273\266\345\255\246\351\231\242", nullptr));

        campus->setItemText(0, QCoreApplication::translate("Entry", "(\346\234\252\351\200\211\346\213\251)", nullptr));
        campus->setItemText(1, QCoreApplication::translate("Entry", "\345\205\253\351\207\214\345\217\260\346\240\241\345\214\272", nullptr));
        campus->setItemText(2, QCoreApplication::translate("Entry", "\346\264\245\345\215\227\346\240\241\345\214\272", nullptr));

        proceed->setText(QCoreApplication::translate("Entry", "\344\270\213\344\270\200\346\255\245 >", nullptr));
        title->setText(QCoreApplication::translate("Entry", "\346\254\242\350\277\216\344\275\277\347\224\250\345\215\227\345\274\200\345\244\247\345\255\246\346\234\254\347\247\221\347\224\237\351\200\211\350\257\276\345\212\251\346\211\213\357\274\201", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("Entry", "\351\200\211\346\213\251\345\271\264\347\272\247", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("Entry", "\351\200\211\346\213\251\345\255\246\351\231\242", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("Entry", "\351\200\211\346\213\251\346\240\241\345\214\272", nullptr));
        intercampus->setText(QCoreApplication::translate("Entry", "\345\205\201\350\256\270\350\267\250\346\240\241\345\214\272\351\200\211\350\257\276", nullptr));
        quit->setText(QCoreApplication::translate("Entry", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("Entry", "\351\200\211\346\213\251\344\270\223\344\270\232", nullptr));
        subMajor->setItemText(0, QCoreApplication::translate("Entry", "(\346\234\252\351\200\211\346\213\251)", nullptr));

    } // retranslateUi

};

namespace Ui {
    class Entry: public Ui_Entry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRY_H
