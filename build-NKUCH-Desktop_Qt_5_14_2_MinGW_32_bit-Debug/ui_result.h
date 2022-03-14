/********************************************************************************
** Form generated from reading UI file 'result.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESULT_H
#define UI_RESULT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_result
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTableWidget *table;
    QPushButton *pushButton;
    QPushButton *save;
    QPushButton *prevRes;
    QPushButton *nextRes;
    QSpinBox *target;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QPushButton *navigate;
    QLineEdit *title;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *resCount;
    QPushButton *save_2;
    QTextEdit *filename;
    QLineEdit *title_2;

    void setupUi(QDialog *Result)
    {
        if (Result->objectName().isEmpty())
            Result->setObjectName(QString::fromUtf8("Result"));
        Result->resize(841, 804);
        scrollArea = new QScrollArea(Result);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 140, 801, 611));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 799, 609));
        table = new QTableWidget(scrollAreaWidgetContents);
        if (table->columnCount() < 8)
            table->setColumnCount(8);
        if (table->rowCount() < 15)
            table->setRowCount(15);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignLeading|Qt::AlignVCenter);
        __qtablewidgetitem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        table->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        table->setItem(0, 1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        table->setItem(0, 2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        table->setItem(0, 3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        table->setItem(0, 4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setTextAlignment(Qt::AlignCenter);
        table->setItem(0, 5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setTextAlignment(Qt::AlignCenter);
        table->setItem(0, 6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setTextAlignment(Qt::AlignCenter);
        table->setItem(0, 7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        table->setItem(1, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        table->setItem(2, 0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        table->setItem(3, 0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        table->setItem(4, 0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        table->setItem(5, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        table->setItem(6, 0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        table->setItem(7, 0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        table->setItem(8, 0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        table->setItem(9, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        table->setItem(10, 0, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        table->setItem(11, 0, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        table->setItem(12, 0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        table->setItem(13, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        table->setItem(14, 0, __qtablewidgetitem21);
        table->setObjectName(QString::fromUtf8("table"));
        table->setGeometry(QRect(0, 0, 801, 611));
        table->setShowGrid(true);
        table->setWordWrap(true);
        table->setRowCount(15);
        table->setColumnCount(8);
        table->horizontalHeader()->setVisible(false);
        table->verticalHeader()->setVisible(false);
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(Result);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(690, 20, 131, 31));
        save = new QPushButton(Result);
        save->setObjectName(QString::fromUtf8("save"));
        save->setGeometry(QRect(20, 760, 181, 28));
        prevRes = new QPushButton(Result);
        prevRes->setObjectName(QString::fromUtf8("prevRes"));
        prevRes->setGeometry(QRect(20, 100, 121, 28));
        nextRes = new QPushButton(Result);
        nextRes->setObjectName(QString::fromUtf8("nextRes"));
        nextRes->setGeometry(QRect(160, 100, 121, 28));
        target = new QSpinBox(Result);
        target->setObjectName(QString::fromUtf8("target"));
        target->setGeometry(QRect(710, 100, 41, 31));
        target->setMinimum(1);
        target->setMaximum(25);
        lineEdit_9 = new QLineEdit(Result);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setEnabled(true);
        lineEdit_9->setGeometry(QRect(660, 100, 41, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(10);
        lineEdit_9->setFont(font);
        lineEdit_9->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_9->setMouseTracking(false);
        lineEdit_9->setAutoFillBackground(false);
        lineEdit_9->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_9->setFrame(false);
        lineEdit_9->setReadOnly(true);
        lineEdit_10 = new QLineEdit(Result);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setEnabled(true);
        lineEdit_10->setGeometry(QRect(760, 100, 61, 31));
        lineEdit_10->setFont(font);
        lineEdit_10->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_10->setMouseTracking(false);
        lineEdit_10->setAutoFillBackground(false);
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_10->setFrame(false);
        lineEdit_10->setReadOnly(true);
        navigate = new QPushButton(Result);
        navigate->setObjectName(QString::fromUtf8("navigate"));
        navigate->setGeometry(QRect(590, 100, 61, 28));
        title = new QLineEdit(Result);
        title->setObjectName(QString::fromUtf8("title"));
        title->setEnabled(true);
        title->setGeometry(QRect(20, 60, 191, 31));
        title->setFont(font);
        title->setCursor(QCursor(Qt::BlankCursor));
        title->setMouseTracking(false);
        title->setAutoFillBackground(false);
        title->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        title->setFrame(false);
        title->setReadOnly(true);
        lineEdit_11 = new QLineEdit(Result);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setEnabled(true);
        lineEdit_11->setGeometry(QRect(20, 0, 361, 31));
        lineEdit_11->setFont(font);
        lineEdit_11->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_11->setMouseTracking(false);
        lineEdit_11->setAutoFillBackground(false);
        lineEdit_11->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_11->setFrame(false);
        lineEdit_11->setReadOnly(true);
        lineEdit_12 = new QLineEdit(Result);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setEnabled(true);
        lineEdit_12->setGeometry(QRect(20, 30, 451, 31));
        lineEdit_12->setFont(font);
        lineEdit_12->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_12->setMouseTracking(false);
        lineEdit_12->setAutoFillBackground(false);
        lineEdit_12->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_12->setFrame(false);
        lineEdit_12->setReadOnly(true);
        resCount = new QLineEdit(Result);
        resCount->setObjectName(QString::fromUtf8("resCount"));
        resCount->setEnabled(true);
        resCount->setGeometry(QRect(290, 0, 21, 31));
        resCount->setFont(font);
        resCount->setCursor(QCursor(Qt::BlankCursor));
        resCount->setMouseTracking(false);
        resCount->setAutoFillBackground(false);
        resCount->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        resCount->setFrame(false);
        resCount->setReadOnly(true);
        save_2 = new QPushButton(Result);
        save_2->setObjectName(QString::fromUtf8("save_2"));
        save_2->setGeometry(QRect(210, 760, 181, 28));
        filename = new QTextEdit(Result);
        filename->setObjectName(QString::fromUtf8("filename"));
        filename->setGeometry(QRect(470, 760, 351, 31));
        title_2 = new QLineEdit(Result);
        title_2->setObjectName(QString::fromUtf8("title_2"));
        title_2->setEnabled(true);
        title_2->setGeometry(QRect(400, 760, 61, 31));
        title_2->setFont(font);
        title_2->setCursor(QCursor(Qt::BlankCursor));
        title_2->setMouseTracking(false);
        title_2->setAutoFillBackground(false);
        title_2->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        title_2->setFrame(false);
        title_2->setReadOnly(true);

        retranslateUi(Result);

        QMetaObject::connectSlotsByName(Result);
    } // setupUi

    void retranslateUi(QDialog *Result)
    {
        Result->setWindowTitle(QCoreApplication::translate("result", "\346\216\250\350\215\220\347\273\223\346\236\234", nullptr));

        const bool __sortingEnabled = table->isSortingEnabled();
        table->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = table->item(0, 0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("result", "\350\257\276\350\241\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->item(0, 1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("result", "\345\221\250\344\270\200", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->item(0, 2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("result", "\345\221\250\344\272\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->item(0, 3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("result", "\345\221\250\344\270\211", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = table->item(0, 4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("result", "\345\221\250\345\233\233", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = table->item(0, 5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("result", "\345\221\250\344\272\224", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = table->item(0, 6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("result", "\345\221\250\345\205\255", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = table->item(0, 7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("result", "\345\221\250\346\227\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = table->item(1, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("result", "\347\254\2541\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = table->item(2, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("result", "\347\254\2542\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = table->item(3, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("result", "\347\254\2543\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = table->item(4, 0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("result", "\347\254\2544\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = table->item(5, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("result", "\347\254\2545\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = table->item(6, 0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("result", "\347\254\2546\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = table->item(7, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("result", "\347\254\2547\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = table->item(8, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("result", "\347\254\2548\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = table->item(9, 0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("result", "\347\254\2549\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = table->item(10, 0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("result", "\347\254\25410\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = table->item(11, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("result", "\347\254\25411\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = table->item(12, 0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("result", "\347\254\25412\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = table->item(13, 0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("result", "\347\254\25413\350\212\202", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = table->item(14, 0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("result", "\347\254\25414\350\212\202", nullptr));
        table->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QCoreApplication::translate("result", "\351\200\200\345\207\272\347\273\223\346\236\234\347\225\214\351\235\242", nullptr));
        save->setText(QCoreApplication::translate("result", "\344\273\245\345\233\276\347\211\207\345\275\242\345\274\217\344\277\235\345\255\230\350\257\245\347\273\223\346\236\234", nullptr));
        prevRes->setText(QCoreApplication::translate("result", "< \344\270\212\344\270\200\344\270\252", nullptr));
        nextRes->setText(QCoreApplication::translate("result", "\344\270\213\344\270\200\344\270\252 >", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("result", "\350\207\263\347\254\254", nullptr));
        lineEdit_10->setText(QCoreApplication::translate("result", "\344\270\252\347\273\223\346\236\234", nullptr));
        navigate->setText(QCoreApplication::translate("result", "\350\267\263\350\275\254", nullptr));
        title->setText(QCoreApplication::translate("result", "\345\275\223\345\211\215\347\232\204\347\273\223\346\236\234\344\270\272\347\254\2541\344\270\252\347\273\223\346\236\234", nullptr));
        lineEdit_11->setText(QCoreApplication::translate("result", "\346\216\250\350\215\220\350\257\276\350\241\250\347\224\237\346\210\220\345\256\214\346\210\220\343\200\202\347\224\237\346\210\220\347\232\204\347\273\223\346\236\234\346\225\260\357\274\232", nullptr));
        lineEdit_12->setText(QCoreApplication::translate("result", "\347\224\237\346\210\220\347\232\204\347\273\223\346\236\234\350\266\212\351\235\240\345\211\215\357\274\214\350\266\212\347\254\246\345\220\210\346\202\250\345\234\250\350\256\276\347\275\256\347\225\214\351\235\242\344\270\255\347\232\204\344\274\230\345\205\210\345\272\246\351\200\211\346\213\251\343\200\202", nullptr));
        resCount->setText(QCoreApplication::translate("result", "0", nullptr));
        save_2->setText(QCoreApplication::translate("result", "\344\273\245xls\350\241\250\346\240\274\344\277\235\345\255\230\350\257\245\347\273\223\346\236\234", nullptr));
        filename->setMarkdown(QString());
        filename->setHtml(QCoreApplication::translate("result", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        title_2->setText(QCoreApplication::translate("result", "\346\226\207\344\273\266\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class result: public Ui_result {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESULT_H
