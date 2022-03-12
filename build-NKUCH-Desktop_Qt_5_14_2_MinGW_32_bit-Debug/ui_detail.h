/********************************************************************************
** Form generated from reading UI file 'detail.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAIL_H
#define UI_DETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Detail
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *Detail)
    {
        if (Detail->objectName().isEmpty())
            Detail->setObjectName(QString::fromUtf8("Detail"));
        Detail->resize(812, 499);
        label = new QLabel(Detail);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(330, 30, 131, 41));
        label->setStyleSheet(QString::fromUtf8("font: 20pt \"\345\256\213\344\275\223\";"));
        textBrowser = new QTextBrowser(Detail);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(40, 100, 731, 361));

        retranslateUi(Detail);

        QMetaObject::connectSlotsByName(Detail);
    } // setupUi

    void retranslateUi(QDialog *Detail)
    {
        Detail->setWindowTitle(QCoreApplication::translate("Detail", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Detail", "\350\257\276\347\250\213\350\257\246\346\203\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Detail: public Ui_Detail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAIL_H
