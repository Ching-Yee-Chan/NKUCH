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
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Loading
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Loading)
    {
        if (Loading->objectName().isEmpty())
            Loading->setObjectName(QString::fromUtf8("Loading"));
        Loading->resize(355, 227);
        label = new QLabel(Loading);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 201, 16));
        textBrowser = new QTextBrowser(Loading);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(20, 50, 311, 151));

        retranslateUi(Loading);

        QMetaObject::connectSlotsByName(Loading);
    } // setupUi

    void retranslateUi(QDialog *Loading)
    {
        Loading->setWindowTitle(QCoreApplication::translate("Loading", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Loading", "\346\255\243\345\234\250\347\224\237\346\210\220\350\257\276\350\241\250\357\274\214\350\257\267\347\250\215\345\200\231...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Loading: public Ui_Loading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_H
