/********************************************************************************
** Form generated from reading UI file 'teachersearch.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHERSEARCH_H
#define UI_TEACHERSEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TeacherSearch
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListWidget *teacherList;

    void setupUi(QDialog *TeacherSearch)
    {
        if (TeacherSearch->objectName().isEmpty())
            TeacherSearch->setObjectName(QString::fromUtf8("TeacherSearch"));
        TeacherSearch->resize(490, 335);
        buttonBox = new QDialogButtonBox(TeacherSearch);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 280, 411, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(TeacherSearch);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 301, 41));
        label->setStyleSheet(QString::fromUtf8("font: 12pt \"3ds\";"));
        scrollArea = new QScrollArea(TeacherSearch);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(40, 80, 401, 181));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 399, 179));
        teacherList = new QListWidget(scrollAreaWidgetContents);
        teacherList->setObjectName(QString::fromUtf8("teacherList"));
        teacherList->setGeometry(QRect(0, 0, 401, 181));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(TeacherSearch);
        QObject::connect(buttonBox, SIGNAL(accepted()), TeacherSearch, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TeacherSearch, SLOT(reject()));

        QMetaObject::connectSlotsByName(TeacherSearch);
    } // setupUi

    void retranslateUi(QDialog *TeacherSearch)
    {
        TeacherSearch->setWindowTitle(QCoreApplication::translate("TeacherSearch", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("TeacherSearch", "\346\273\241\350\266\263\346\235\241\344\273\266\347\232\204\346\225\231\345\270\210\345\246\202\344\270\213\357\274\214\350\257\267\351\200\211\346\213\251\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TeacherSearch: public Ui_TeacherSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHERSEARCH_H
