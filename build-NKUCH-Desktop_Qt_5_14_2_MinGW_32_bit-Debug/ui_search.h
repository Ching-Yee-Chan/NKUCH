/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search
{
public:
    QLineEdit *lineEdit_2;
    QTextEdit *name;
    QLineEdit *lineEdit_3;
    QTextEdit *teacher;
    QTextEdit *no;
    QLineEdit *lineEdit_4;
    QPushButton *run;
    QPushButton *result;
    QPushButton *cancel;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_4;
    QSpinBox *score;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QCheckBox *campus0;
    QCheckBox *campus1;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QListWidget *courseList;
    QLineEdit *lineEdit_9;
    QTextEdit *code;
    QCheckBox *campus2;
    QLineEdit *lineEdit_10;

    void setupUi(QDialog *search)
    {
        if (search->objectName().isEmpty())
            search->setObjectName(QString::fromUtf8("search"));
        search->resize(451, 699);
        lineEdit_2 = new QLineEdit(search);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setGeometry(QRect(30, 110, 61, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(10);
        lineEdit_2->setFont(font);
        lineEdit_2->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_2->setMouseTracking(false);
        lineEdit_2->setAutoFillBackground(false);
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_2->setFrame(false);
        lineEdit_2->setReadOnly(true);
        name = new QTextEdit(search);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(110, 110, 311, 31));
        QFont font1;
        font1.setPointSize(10);
        name->setFont(font1);
        lineEdit_3 = new QLineEdit(search);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(true);
        lineEdit_3->setGeometry(QRect(30, 160, 81, 31));
        lineEdit_3->setFont(font);
        lineEdit_3->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_3->setMouseTracking(false);
        lineEdit_3->setAutoFillBackground(false);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_3->setFrame(false);
        lineEdit_3->setReadOnly(true);
        teacher = new QTextEdit(search);
        teacher->setObjectName(QString::fromUtf8("teacher"));
        teacher->setGeometry(QRect(110, 160, 311, 31));
        teacher->setFont(font1);
        no = new QTextEdit(search);
        no->setObjectName(QString::fromUtf8("no"));
        no->setGeometry(QRect(210, 10, 101, 31));
        no->setFont(font1);
        lineEdit_4 = new QLineEdit(search);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setEnabled(true);
        lineEdit_4->setGeometry(QRect(30, 20, 91, 31));
        lineEdit_4->setFont(font);
        lineEdit_4->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_4->setMouseTracking(false);
        lineEdit_4->setAutoFillBackground(false);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_4->setFrame(false);
        lineEdit_4->setReadOnly(true);
        run = new QPushButton(search);
        run->setObjectName(QString::fromUtf8("run"));
        run->setGeometry(QRect(10, 240, 91, 28));
        result = new QPushButton(search);
        result->setObjectName(QString::fromUtf8("result"));
        result->setGeometry(QRect(290, 240, 91, 28));
        result->setCheckable(false);
        cancel = new QPushButton(search);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(390, 240, 51, 28));
        scrollArea_3 = new QScrollArea(search);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(10, 370, 431, 311));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 429, 309));
        scrollArea_3->setWidget(scrollAreaWidgetContents_4);
        score = new QSpinBox(search);
        score->setObjectName(QString::fromUtf8("score"));
        score->setGeometry(QRect(200, 240, 61, 31));
        QFont font2;
        font2.setPointSize(9);
        score->setFont(font2);
        score->setMaximum(100);
        score->setValue(100);
        lineEdit_5 = new QLineEdit(search);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setEnabled(true);
        lineEdit_5->setGeometry(QRect(130, 240, 81, 31));
        lineEdit_5->setFont(font);
        lineEdit_5->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_5->setMouseTracking(false);
        lineEdit_5->setAutoFillBackground(false);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_5->setFrame(false);
        lineEdit_5->setReadOnly(true);
        lineEdit_6 = new QLineEdit(search);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setEnabled(true);
        lineEdit_6->setGeometry(QRect(30, 200, 41, 31));
        lineEdit_6->setFont(font);
        lineEdit_6->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_6->setMouseTracking(false);
        lineEdit_6->setAutoFillBackground(false);
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_6->setFrame(false);
        lineEdit_6->setReadOnly(true);
        campus0 = new QCheckBox(search);
        campus0->setObjectName(QString::fromUtf8("campus0"));
        campus0->setGeometry(QRect(110, 200, 91, 31));
        campus1 = new QCheckBox(search);
        campus1->setObjectName(QString::fromUtf8("campus1"));
        campus1->setGeometry(QRect(210, 200, 91, 31));
        lineEdit_7 = new QLineEdit(search);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setEnabled(true);
        lineEdit_7->setGeometry(QRect(10, 270, 291, 31));
        lineEdit_7->setFont(font);
        lineEdit_7->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_7->setMouseTracking(false);
        lineEdit_7->setAutoFillBackground(false);
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_7->setFrame(false);
        lineEdit_7->setReadOnly(true);
        lineEdit_8 = new QLineEdit(search);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));
        lineEdit_8->setEnabled(true);
        lineEdit_8->setGeometry(QRect(10, 300, 421, 31));
        lineEdit_8->setFont(font);
        lineEdit_8->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_8->setMouseTracking(false);
        lineEdit_8->setAutoFillBackground(false);
        lineEdit_8->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_8->setFrame(false);
        lineEdit_8->setReadOnly(true);
        courseList = new QListWidget(search);
        courseList->setObjectName(QString::fromUtf8("courseList"));
        courseList->setGeometry(QRect(10, 370, 431, 311));
        lineEdit_9 = new QLineEdit(search);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setEnabled(true);
        lineEdit_9->setGeometry(QRect(30, 60, 121, 31));
        lineEdit_9->setFont(font);
        lineEdit_9->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_9->setMouseTracking(false);
        lineEdit_9->setAutoFillBackground(false);
        lineEdit_9->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_9->setFrame(false);
        lineEdit_9->setReadOnly(true);
        code = new QTextEdit(search);
        code->setObjectName(QString::fromUtf8("code"));
        code->setGeometry(QRect(210, 60, 211, 31));
        code->setFont(font1);
        campus2 = new QCheckBox(search);
        campus2->setObjectName(QString::fromUtf8("campus2"));
        campus2->setGeometry(QRect(300, 200, 91, 31));
        lineEdit_10 = new QLineEdit(search);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setEnabled(true);
        lineEdit_10->setGeometry(QRect(10, 330, 421, 31));
        lineEdit_10->setFont(font);
        lineEdit_10->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_10->setMouseTracking(false);
        lineEdit_10->setAutoFillBackground(false);
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_10->setFrame(false);
        lineEdit_10->setReadOnly(true);

        retranslateUi(search);

        QMetaObject::connectSlotsByName(search);
    } // setupUi

    void retranslateUi(QDialog *search)
    {
        search->setWindowTitle(QCoreApplication::translate("search", "\350\257\276\347\250\213\346\220\234\347\264\242", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("search", "\350\257\276\347\250\213\345\220\215", nullptr));
        name->setHtml(QCoreApplication::translate("search", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        lineEdit_3->setText(QCoreApplication::translate("search", "\346\216\210\350\257\276\350\200\201\345\270\210", nullptr));
        teacher->setHtml(QCoreApplication::translate("search", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        no->setHtml(QCoreApplication::translate("search", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("search", "\345\233\233\344\275\215\346\225\260\350\257\276\345\217\267", nullptr));
        run->setText(QCoreApplication::translate("search", "\346\220\234\347\264\242", nullptr));
        result->setText(QCoreApplication::translate("search", "\351\200\211\346\213\251\345\271\266\350\277\224\345\233\236", nullptr));
        cancel->setText(QCoreApplication::translate("search", "\350\277\224\345\233\236", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("search", "\344\274\230\345\205\210\345\272\246", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("search", "\346\240\241\345\214\272", nullptr));
        campus0->setText(QCoreApplication::translate("search", "\345\205\253\351\207\214\345\217\260", nullptr));
        campus1->setText(QCoreApplication::translate("search", "\346\264\245\345\215\227", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("search", "\346\217\220\347\244\272\357\274\2321.\345\277\205\344\277\256\350\257\276\347\232\204\344\274\230\345\205\210\345\272\246\345\273\272\350\256\256\350\260\203\350\207\263100", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("search", "2.\350\213\245\346\234\211\345\244\232\344\270\252\346\216\210\350\257\276\350\200\201\345\270\210\357\274\214\350\257\267\347\224\250\351\200\227\345\217\267\345\260\206\345\205\266\351\232\224\345\274\200\357\274\214\344\270\215\347\225\231\347\251\272\346\240\274", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("search", "\345\205\253\344\275\215\350\257\276\347\250\213\344\273\243\347\240\201", nullptr));
        code->setHtml(QCoreApplication::translate("search", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        campus2->setText(QCoreApplication::translate("search", "\346\263\260\350\276\276", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("search", "3.\345\217\214\345\207\273\344\273\245\346\237\245\347\234\213\350\257\276\347\250\213\350\257\246\346\203\205", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search: public Ui_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
