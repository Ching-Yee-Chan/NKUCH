/********************************************************************************
** Form generated from reading UI file 'loading.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADING_H
#define UI_LOADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Loading
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Loading)
    {
        if (Loading->objectName().isEmpty())
            Loading->setObjectName(QString::fromUtf8("Loading"));
        Loading->resize(400, 300);
        label = new QLabel(Loading);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 281, 31));
        label->setStyleSheet(QString::fromUtf8("font: 14pt \"3ds\";"));
        textBrowser = new QTextBrowser(Loading);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(40, 70, 321, 192));

        retranslateUi(Loading);

        QMetaObject::connectSlotsByName(Loading);
    } // setupUi

    void retranslateUi(QWidget *Loading)
    {
        Loading->setWindowTitle(QCoreApplication::translate("Loading", "Form", nullptr));
        label->setText(QCoreApplication::translate("Loading", "\346\255\243\345\234\250\347\224\237\346\210\220\350\257\276\350\241\250\357\274\214\350\257\267\347\250\215\345\200\231...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loading: public Ui_Loading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_H
