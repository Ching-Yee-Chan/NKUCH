/********************************************************************************
** Form generated from reading UI file 'nkuch.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NKUCH_H
#define UI_NKUCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NKUCH
{
public:
    QLineEdit *lineEdit_2;
    QComboBox *majorPf;
    QLineEdit *lineEdit_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QListWidget *majorList;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QListWidget *teacherList;
    QTextEdit *teacherPf;
    QPushButton *majorPush;
    QPushButton *majorPop;
    QPushButton *teacherPush;
    QPushButton *teacherPop;
    QPushButton *majorRate;
    QPushButton *teacherRate;
    QLineEdit *lineEdit_4;
    QPushButton *search;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_4;
    QListWidget *courseList;
    QPushButton *coursePop;
    QLineEdit *lineEdit_5;
    QComboBox *e_course;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QPushButton *courseRate;
    QLineEdit *lineEdit;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_5;
    QListWidget *exceptionList;
    QFrame *line;
    QComboBox *week;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_11;
    QComboBox *start;
    QLineEdit *lineEdit_12;
    QComboBox *end;
    QPushButton *exceptionPush;
    QPushButton *exceptionPop;
    QPushButton *exceptionClear;
    QPushButton *exceptionWeekend;
    QPushButton *exceptionNoon;
    QPushButton *exceptionNight;
    QPushButton *run;
    QPushButton *cancel;
    QSpinBox *majorNum;
    QSpinBox *teacherNum;
    QSpinBox *courseNum;
    QSpinBox *maximum;
    QSpinBox *minimum;
    QCheckBox *intercampus;
    QLineEdit *lineEdit_9;
    QTextEdit *info;
    QPushButton *reChoose;
    QLineEdit *lineEdit_14;
    QSpinBox *maxRes;
    QTextBrowser *textBrowser;
    QPushButton *exceptionMorning;

    void setupUi(QWidget *NKUCH)
    {
        if (NKUCH->objectName().isEmpty())
            NKUCH->setObjectName(QString::fromUtf8("NKUCH"));
        NKUCH->resize(926, 825);
        lineEdit_2 = new QLineEdit(NKUCH);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setEnabled(true);
        lineEdit_2->setGeometry(QRect(30, 70, 121, 41));
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
        majorPf = new QComboBox(NKUCH);
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->addItem(QString());
        majorPf->setObjectName(QString::fromUtf8("majorPf"));
        majorPf->setGeometry(QRect(240, 80, 191, 41));
        lineEdit_3 = new QLineEdit(NKUCH);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setEnabled(true);
        lineEdit_3->setGeometry(QRect(30, 270, 91, 31));
        lineEdit_3->setFont(font);
        lineEdit_3->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_3->setMouseTracking(false);
        lineEdit_3->setAutoFillBackground(false);
        lineEdit_3->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_3->setFrame(false);
        lineEdit_3->setReadOnly(true);
        scrollArea = new QScrollArea(NKUCH);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(30, 110, 181, 141));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 179, 139));
        majorList = new QListWidget(scrollAreaWidgetContents);
        majorList->setObjectName(QString::fromUtf8("majorList"));
        majorList->setGeometry(QRect(0, 0, 181, 141));
        scrollArea->setWidget(scrollAreaWidgetContents);
        scrollArea_2 = new QScrollArea(NKUCH);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setGeometry(QRect(30, 300, 181, 141));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 179, 139));
        teacherList = new QListWidget(scrollAreaWidgetContents_2);
        teacherList->setObjectName(QString::fromUtf8("teacherList"));
        teacherList->setGeometry(QRect(0, 0, 181, 141));
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);
        teacherPf = new QTextEdit(NKUCH);
        teacherPf->setObjectName(QString::fromUtf8("teacherPf"));
        teacherPf->setGeometry(QRect(240, 270, 191, 31));
        majorPush = new QPushButton(NKUCH);
        majorPush->setObjectName(QString::fromUtf8("majorPush"));
        majorPush->setGeometry(QRect(240, 150, 91, 41));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(majorPush->sizePolicy().hasHeightForWidth());
        majorPush->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font1.setPointSize(9);
        majorPush->setFont(font1);
        majorPop = new QPushButton(NKUCH);
        majorPop->setObjectName(QString::fromUtf8("majorPop"));
        majorPop->setGeometry(QRect(340, 150, 91, 41));
        sizePolicy.setHeightForWidth(majorPop->sizePolicy().hasHeightForWidth());
        majorPop->setSizePolicy(sizePolicy);
        majorPop->setFont(font1);
        teacherPush = new QPushButton(NKUCH);
        teacherPush->setObjectName(QString::fromUtf8("teacherPush"));
        teacherPush->setGeometry(QRect(240, 330, 91, 41));
        sizePolicy.setHeightForWidth(teacherPush->sizePolicy().hasHeightForWidth());
        teacherPush->setSizePolicy(sizePolicy);
        teacherPush->setFont(font1);
        teacherPop = new QPushButton(NKUCH);
        teacherPop->setObjectName(QString::fromUtf8("teacherPop"));
        teacherPop->setGeometry(QRect(340, 330, 91, 41));
        sizePolicy.setHeightForWidth(teacherPop->sizePolicy().hasHeightForWidth());
        teacherPop->setSizePolicy(sizePolicy);
        teacherPop->setFont(font1);
        majorRate = new QPushButton(NKUCH);
        majorRate->setObjectName(QString::fromUtf8("majorRate"));
        majorRate->setGeometry(QRect(240, 210, 91, 41));
        sizePolicy.setHeightForWidth(majorRate->sizePolicy().hasHeightForWidth());
        majorRate->setSizePolicy(sizePolicy);
        majorRate->setFont(font1);
        teacherRate = new QPushButton(NKUCH);
        teacherRate->setObjectName(QString::fromUtf8("teacherRate"));
        teacherRate->setGeometry(QRect(240, 390, 91, 41));
        sizePolicy.setHeightForWidth(teacherRate->sizePolicy().hasHeightForWidth());
        teacherRate->setSizePolicy(sizePolicy);
        teacherRate->setFont(font1);
        lineEdit_4 = new QLineEdit(NKUCH);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setEnabled(true);
        lineEdit_4->setGeometry(QRect(480, 110, 171, 41));
        lineEdit_4->setFont(font);
        lineEdit_4->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_4->setMouseTracking(false);
        lineEdit_4->setAutoFillBackground(false);
        lineEdit_4->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_4->setFrame(false);
        lineEdit_4->setReadOnly(true);
        search = new QPushButton(NKUCH);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(790, 110, 111, 41));
        sizePolicy.setHeightForWidth(search->sizePolicy().hasHeightForWidth());
        search->setSizePolicy(sizePolicy);
        search->setFont(font1);
        scrollArea_3 = new QScrollArea(NKUCH);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setGeometry(QRect(480, 160, 421, 331));
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_4"));
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 419, 329));
        courseList = new QListWidget(scrollAreaWidgetContents_4);
        courseList->setObjectName(QString::fromUtf8("courseList"));
        courseList->setGeometry(QRect(0, 0, 421, 331));
        scrollArea_3->setWidget(scrollAreaWidgetContents_4);
        coursePop = new QPushButton(NKUCH);
        coursePop->setObjectName(QString::fromUtf8("coursePop"));
        coursePop->setGeometry(QRect(480, 500, 61, 31));
        sizePolicy.setHeightForWidth(coursePop->sizePolicy().hasHeightForWidth());
        coursePop->setSizePolicy(sizePolicy);
        coursePop->setFont(font1);
        lineEdit_5 = new QLineEdit(NKUCH);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setEnabled(true);
        lineEdit_5->setGeometry(QRect(520, 610, 131, 31));
        lineEdit_5->setFont(font);
        lineEdit_5->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_5->setMouseTracking(false);
        lineEdit_5->setAutoFillBackground(false);
        lineEdit_5->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_5->setFrame(false);
        lineEdit_5->setReadOnly(true);
        e_course = new QComboBox(NKUCH);
        e_course->addItem(QString());
        e_course->addItem(QString());
        e_course->addItem(QString());
        e_course->addItem(QString());
        e_course->addItem(QString());
        e_course->setObjectName(QString::fromUtf8("e_course"));
        e_course->setGeometry(QRect(680, 610, 161, 31));
        lineEdit_6 = new QLineEdit(NKUCH);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setEnabled(true);
        lineEdit_6->setGeometry(QRect(520, 660, 91, 31));
        lineEdit_6->setFont(font);
        lineEdit_6->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_6->setMouseTracking(false);
        lineEdit_6->setAutoFillBackground(false);
        lineEdit_6->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_6->setFrame(false);
        lineEdit_6->setReadOnly(true);
        lineEdit_7 = new QLineEdit(NKUCH);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setEnabled(true);
        lineEdit_7->setGeometry(QRect(730, 660, 91, 31));
        lineEdit_7->setFont(font);
        lineEdit_7->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_7->setMouseTracking(false);
        lineEdit_7->setAutoFillBackground(false);
        lineEdit_7->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_7->setFrame(false);
        lineEdit_7->setReadOnly(true);
        courseRate = new QPushButton(NKUCH);
        courseRate->setObjectName(QString::fromUtf8("courseRate"));
        courseRate->setGeometry(QRect(740, 500, 91, 31));
        sizePolicy.setHeightForWidth(courseRate->sizePolicy().hasHeightForWidth());
        courseRate->setSizePolicy(sizePolicy);
        courseRate->setFont(font1);
        lineEdit = new QLineEdit(NKUCH);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(true);
        lineEdit->setGeometry(QRect(30, 450, 111, 31));
        lineEdit->setFont(font);
        lineEdit->setCursor(QCursor(Qt::BlankCursor));
        lineEdit->setMouseTracking(false);
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit->setFrame(false);
        lineEdit->setReadOnly(true);
        scrollArea_4 = new QScrollArea(NKUCH);
        scrollArea_4->setObjectName(QString::fromUtf8("scrollArea_4"));
        scrollArea_4->setGeometry(QRect(30, 480, 181, 211));
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_5"));
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 179, 209));
        exceptionList = new QListWidget(scrollAreaWidgetContents_5);
        exceptionList->setObjectName(QString::fromUtf8("exceptionList"));
        exceptionList->setGeometry(QRect(0, 0, 181, 211));
        scrollArea_4->setWidget(scrollAreaWidgetContents_5);
        line = new QFrame(NKUCH);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(450, 80, 20, 611));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        week = new QComboBox(NKUCH);
        week->addItem(QString());
        week->addItem(QString());
        week->addItem(QString());
        week->addItem(QString());
        week->addItem(QString());
        week->addItem(QString());
        week->addItem(QString());
        week->setObjectName(QString::fromUtf8("week"));
        week->setGeometry(QRect(240, 490, 91, 31));
        lineEdit_10 = new QLineEdit(NKUCH);
        lineEdit_10->setObjectName(QString::fromUtf8("lineEdit_10"));
        lineEdit_10->setEnabled(true);
        lineEdit_10->setGeometry(QRect(260, 450, 51, 41));
        lineEdit_10->setFont(font);
        lineEdit_10->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_10->setMouseTracking(false);
        lineEdit_10->setAutoFillBackground(false);
        lineEdit_10->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_10->setFrame(false);
        lineEdit_10->setReadOnly(true);
        lineEdit_11 = new QLineEdit(NKUCH);
        lineEdit_11->setObjectName(QString::fromUtf8("lineEdit_11"));
        lineEdit_11->setEnabled(true);
        lineEdit_11->setGeometry(QRect(240, 540, 91, 41));
        lineEdit_11->setFont(font);
        lineEdit_11->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_11->setMouseTracking(false);
        lineEdit_11->setAutoFillBackground(false);
        lineEdit_11->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_11->setFrame(false);
        lineEdit_11->setReadOnly(true);
        start = new QComboBox(NKUCH);
        start->addItem(QString());
        start->addItem(QString());
        start->addItem(QString());
        start->addItem(QString());
        start->addItem(QString());
        start->addItem(QString());
        start->addItem(QString());
        start->addItem(QString());
        start->addItem(QString());
        start->addItem(QString());
        start->addItem(QString());
        start->addItem(QString());
        start->addItem(QString());
        start->addItem(QString());
        start->setObjectName(QString::fromUtf8("start"));
        start->setGeometry(QRect(240, 580, 91, 31));
        lineEdit_12 = new QLineEdit(NKUCH);
        lineEdit_12->setObjectName(QString::fromUtf8("lineEdit_12"));
        lineEdit_12->setEnabled(true);
        lineEdit_12->setGeometry(QRect(240, 620, 91, 41));
        lineEdit_12->setFont(font);
        lineEdit_12->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_12->setMouseTracking(false);
        lineEdit_12->setAutoFillBackground(false);
        lineEdit_12->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_12->setFrame(false);
        lineEdit_12->setReadOnly(true);
        end = new QComboBox(NKUCH);
        end->addItem(QString());
        end->addItem(QString());
        end->addItem(QString());
        end->addItem(QString());
        end->addItem(QString());
        end->addItem(QString());
        end->addItem(QString());
        end->addItem(QString());
        end->addItem(QString());
        end->addItem(QString());
        end->addItem(QString());
        end->addItem(QString());
        end->addItem(QString());
        end->addItem(QString());
        end->addItem(QString());
        end->setObjectName(QString::fromUtf8("end"));
        end->setGeometry(QRect(240, 660, 91, 31));
        exceptionPush = new QPushButton(NKUCH);
        exceptionPush->setObjectName(QString::fromUtf8("exceptionPush"));
        exceptionPush->setGeometry(QRect(350, 480, 81, 41));
        sizePolicy.setHeightForWidth(exceptionPush->sizePolicy().hasHeightForWidth());
        exceptionPush->setSizePolicy(sizePolicy);
        exceptionPush->setFont(font1);
        exceptionPop = new QPushButton(NKUCH);
        exceptionPop->setObjectName(QString::fromUtf8("exceptionPop"));
        exceptionPop->setGeometry(QRect(350, 570, 81, 41));
        sizePolicy.setHeightForWidth(exceptionPop->sizePolicy().hasHeightForWidth());
        exceptionPop->setSizePolicy(sizePolicy);
        exceptionPop->setFont(font1);
        exceptionClear = new QPushButton(NKUCH);
        exceptionClear->setObjectName(QString::fromUtf8("exceptionClear"));
        exceptionClear->setGeometry(QRect(350, 650, 81, 41));
        sizePolicy.setHeightForWidth(exceptionClear->sizePolicy().hasHeightForWidth());
        exceptionClear->setSizePolicy(sizePolicy);
        exceptionClear->setFont(font1);
        exceptionWeekend = new QPushButton(NKUCH);
        exceptionWeekend->setObjectName(QString::fromUtf8("exceptionWeekend"));
        exceptionWeekend->setGeometry(QRect(480, 560, 91, 31));
        sizePolicy.setHeightForWidth(exceptionWeekend->sizePolicy().hasHeightForWidth());
        exceptionWeekend->setSizePolicy(sizePolicy);
        exceptionWeekend->setFont(font1);
        exceptionNoon = new QPushButton(NKUCH);
        exceptionNoon->setObjectName(QString::fromUtf8("exceptionNoon"));
        exceptionNoon->setGeometry(QRect(580, 560, 91, 31));
        sizePolicy.setHeightForWidth(exceptionNoon->sizePolicy().hasHeightForWidth());
        exceptionNoon->setSizePolicy(sizePolicy);
        exceptionNoon->setFont(font1);
        exceptionNight = new QPushButton(NKUCH);
        exceptionNight->setObjectName(QString::fromUtf8("exceptionNight"));
        exceptionNight->setGeometry(QRect(780, 560, 121, 31));
        sizePolicy.setHeightForWidth(exceptionNight->sizePolicy().hasHeightForWidth());
        exceptionNight->setSizePolicy(sizePolicy);
        exceptionNight->setFont(font1);
        run = new QPushButton(NKUCH);
        run->setObjectName(QString::fromUtf8("run"));
        run->setGeometry(QRect(370, 720, 321, 31));
        sizePolicy.setHeightForWidth(run->sizePolicy().hasHeightForWidth());
        run->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe Devanagari"));
        font2.setPointSize(10);
        run->setFont(font2);
        cancel = new QPushButton(NKUCH);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(750, 780, 151, 31));
        sizePolicy.setHeightForWidth(cancel->sizePolicy().hasHeightForWidth());
        cancel->setSizePolicy(sizePolicy);
        cancel->setFont(font1);
        majorNum = new QSpinBox(NKUCH);
        majorNum->setObjectName(QString::fromUtf8("majorNum"));
        majorNum->setGeometry(QRect(340, 210, 91, 41));
        majorNum->setMaximum(100);
        majorNum->setValue(50);
        teacherNum = new QSpinBox(NKUCH);
        teacherNum->setObjectName(QString::fromUtf8("teacherNum"));
        teacherNum->setGeometry(QRect(340, 390, 91, 41));
        teacherNum->setMaximum(100);
        teacherNum->setValue(50);
        courseNum = new QSpinBox(NKUCH);
        courseNum->setObjectName(QString::fromUtf8("courseNum"));
        courseNum->setGeometry(QRect(850, 500, 51, 31));
        courseNum->setMaximum(100);
        courseNum->setValue(50);
        maximum = new QSpinBox(NKUCH);
        maximum->setObjectName(QString::fromUtf8("maximum"));
        maximum->setGeometry(QRect(640, 660, 61, 31));
        maximum->setMaximum(50);
        maximum->setValue(35);
        minimum = new QSpinBox(NKUCH);
        minimum->setObjectName(QString::fromUtf8("minimum"));
        minimum->setGeometry(QRect(840, 660, 61, 31));
        minimum->setMaximum(50);
        minimum->setValue(25);
        intercampus = new QCheckBox(NKUCH);
        intercampus->setObjectName(QString::fromUtf8("intercampus"));
        intercampus->setGeometry(QRect(480, 70, 131, 51));
        intercampus->setFont(font1);
        intercampus->setChecked(false);
        lineEdit_9 = new QLineEdit(NKUCH);
        lineEdit_9->setObjectName(QString::fromUtf8("lineEdit_9"));
        lineEdit_9->setEnabled(true);
        lineEdit_9->setGeometry(QRect(30, 20, 221, 41));
        lineEdit_9->setFont(font);
        lineEdit_9->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_9->setMouseTracking(false);
        lineEdit_9->setAutoFillBackground(false);
        lineEdit_9->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_9->setFrame(false);
        lineEdit_9->setReadOnly(true);
        info = new QTextEdit(NKUCH);
        info->setObjectName(QString::fromUtf8("info"));
        info->setGeometry(QRect(240, 20, 671, 41));
        info->setReadOnly(true);
        reChoose = new QPushButton(NKUCH);
        reChoose->setObjectName(QString::fromUtf8("reChoose"));
        reChoose->setGeometry(QRect(30, 720, 321, 31));
        sizePolicy.setHeightForWidth(reChoose->sizePolicy().hasHeightForWidth());
        reChoose->setSizePolicy(sizePolicy);
        reChoose->setFont(font1);
        lineEdit_14 = new QLineEdit(NKUCH);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));
        lineEdit_14->setEnabled(true);
        lineEdit_14->setGeometry(QRect(710, 710, 131, 51));
        lineEdit_14->setFont(font);
        lineEdit_14->setCursor(QCursor(Qt::BlankCursor));
        lineEdit_14->setMouseTracking(false);
        lineEdit_14->setAutoFillBackground(false);
        lineEdit_14->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        lineEdit_14->setFrame(false);
        lineEdit_14->setReadOnly(true);
        maxRes = new QSpinBox(NKUCH);
        maxRes->setObjectName(QString::fromUtf8("maxRes"));
        maxRes->setGeometry(QRect(850, 720, 51, 31));
        maxRes->setMinimum(1);
        maxRes->setMaximum(30);
        maxRes->setValue(10);
        textBrowser = new QTextBrowser(NKUCH);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(true);
        textBrowser->setGeometry(QRect(20, 760, 901, 61));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color:rgba(0,0,0,0);"));
        textBrowser->setFrameShape(QFrame::NoFrame);
        exceptionMorning = new QPushButton(NKUCH);
        exceptionMorning->setObjectName(QString::fromUtf8("exceptionMorning"));
        exceptionMorning->setGeometry(QRect(680, 560, 93, 31));

        retranslateUi(NKUCH);

        QMetaObject::connectSlotsByName(NKUCH);
    } // setupUi

    void retranslateUi(QWidget *NKUCH)
    {
        NKUCH->setWindowTitle(QCoreApplication::translate("NKUCH", "\345\215\227\345\274\200\345\244\247\345\255\246\346\234\254\347\247\221\347\224\237\351\200\211\350\257\276\345\212\251\346\211\213", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("NKUCH", "\345\201\217\345\245\275\345\274\200\350\257\276\345\215\225\344\275\215", nullptr));
        majorPf->setItemText(0, QCoreApplication::translate("NKUCH", "(\346\234\252\351\200\211\346\213\251)", nullptr));
        majorPf->setItemText(1, QCoreApplication::translate("NKUCH", "\351\200\232\350\257\206\351\200\211\344\277\256\350\257\276", nullptr));
        majorPf->setItemText(2, QCoreApplication::translate("NKUCH", "\346\225\260\345\255\246\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(3, QCoreApplication::translate("NKUCH", "\347\211\251\347\220\206\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(4, QCoreApplication::translate("NKUCH", "\345\214\226\345\255\246\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(5, QCoreApplication::translate("NKUCH", "\347\224\237\345\221\275\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(6, QCoreApplication::translate("NKUCH", "\347\216\257\345\242\203\347\247\221\345\255\246\344\270\216\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(7, QCoreApplication::translate("NKUCH", "\350\215\257\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(8, QCoreApplication::translate("NKUCH", "\346\235\220\346\226\231\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(9, QCoreApplication::translate("NKUCH", "\347\273\237\350\256\241\344\270\216\346\225\260\346\215\256\347\247\221\345\255\246\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(10, QCoreApplication::translate("NKUCH", "\345\214\273\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(11, QCoreApplication::translate("NKUCH", "\351\251\254\345\205\213\346\200\235\344\270\273\344\271\211\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(12, QCoreApplication::translate("NKUCH", "\345\244\226\345\233\275\350\257\255\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(13, QCoreApplication::translate("NKUCH", "\346\226\207\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(14, QCoreApplication::translate("NKUCH", "\346\261\211\350\257\255\350\250\200\346\226\207\345\214\226\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(15, QCoreApplication::translate("NKUCH", "\346\263\225\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(16, QCoreApplication::translate("NKUCH", "\345\221\250\346\201\251\346\235\245\346\224\277\345\272\234\347\256\241\347\220\206\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(17, QCoreApplication::translate("NKUCH", "\345\223\262\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(18, QCoreApplication::translate("NKUCH", "\345\216\206\345\217\262\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(19, QCoreApplication::translate("NKUCH", "\347\273\217\346\265\216\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(20, QCoreApplication::translate("NKUCH", "\351\207\221\350\236\215\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(21, QCoreApplication::translate("NKUCH", "\345\225\206\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(22, QCoreApplication::translate("NKUCH", "\346\227\205\346\270\270\344\270\216\346\234\215\345\212\241\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(23, QCoreApplication::translate("NKUCH", "\347\224\265\345\255\220\344\277\241\346\201\257\344\270\216\345\205\211\345\255\246\345\267\245\347\250\213\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(24, QCoreApplication::translate("NKUCH", "\350\256\241\347\256\227\346\234\272\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(25, QCoreApplication::translate("NKUCH", "\347\275\221\347\273\234\347\251\272\351\227\264\345\256\211\345\205\250\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(26, QCoreApplication::translate("NKUCH", "\344\272\272\345\267\245\346\231\272\350\203\275\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(27, QCoreApplication::translate("NKUCH", "\350\275\257\344\273\266\345\255\246\351\231\242", nullptr));
        majorPf->setItemText(28, QCoreApplication::translate("NKUCH", "\345\205\254\345\205\261\350\213\261\350\257\255\346\225\231\345\255\246\351\203\250", nullptr));
        majorPf->setItemText(29, QCoreApplication::translate("NKUCH", "\345\205\254\345\205\261\350\256\241\347\256\227\346\234\272\345\237\272\347\241\200\346\225\231\345\255\246\351\203\250", nullptr));
        majorPf->setItemText(30, QCoreApplication::translate("NKUCH", "\351\251\254\345\205\213\346\200\235\344\270\273\344\271\211\345\237\272\347\241\200\347\220\206\350\256\272\346\225\231\345\255\246\351\203\250", nullptr));
        majorPf->setItemText(31, QCoreApplication::translate("NKUCH", "\351\253\230\347\255\211\346\225\260\345\255\246\346\225\231\345\255\246\351\203\250", nullptr));
        majorPf->setItemText(32, QCoreApplication::translate("NKUCH", "\345\206\233\344\272\213\346\225\231\347\240\224\345\256\244", nullptr));
        majorPf->setItemText(33, QCoreApplication::translate("NKUCH", "\345\244\251\346\264\245\345\244\247\345\255\246\347\256\241\347\220\206\344\270\216\347\273\217\346\265\216\345\255\246\351\203\250", nullptr));
        majorPf->setItemText(34, QCoreApplication::translate("NKUCH", "\344\275\223\350\202\262\351\203\250", nullptr));

        lineEdit_3->setText(QCoreApplication::translate("NKUCH", "\345\201\217\345\245\275\347\232\204\350\200\201\345\270\210", nullptr));
        teacherPf->setMarkdown(QString());
        teacherPf->setHtml(QCoreApplication::translate("NKUCH", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        majorPush->setText(QCoreApplication::translate("NKUCH", "\346\267\273\345\212\240", nullptr));
        majorPop->setText(QCoreApplication::translate("NKUCH", "\345\210\240\351\231\244", nullptr));
        teacherPush->setText(QCoreApplication::translate("NKUCH", "\346\267\273\345\212\240", nullptr));
        teacherPop->setText(QCoreApplication::translate("NKUCH", "\345\210\240\351\231\244", nullptr));
        majorRate->setText(QCoreApplication::translate("NKUCH", "\350\256\276\347\275\256\344\274\230\345\205\210\345\272\246", nullptr));
        teacherRate->setText(QCoreApplication::translate("NKUCH", "\350\256\276\347\275\256\344\274\230\345\205\210\345\272\246", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("NKUCH", "\346\267\273\345\212\240\345\277\205\344\277\256\350\257\276/\345\201\217\345\245\275\350\257\276\347\250\213", nullptr));
        search->setText(QCoreApplication::translate("NKUCH", "\346\220\234\347\264\242\345\271\266\346\267\273\345\212\240", nullptr));
        coursePop->setText(QCoreApplication::translate("NKUCH", "\345\210\240\351\231\244", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("NKUCH", "\351\200\211\344\277\256\350\257\276\345\255\246\345\210\206\350\246\201\346\261\202", nullptr));
        e_course->setItemText(0, QCoreApplication::translate("NKUCH", "\351\232\217\346\204\217", nullptr));
        e_course->setItemText(1, QCoreApplication::translate("NKUCH", "\345\260\275\351\207\217\351\200\2112\345\210\206\347\232\204", nullptr));
        e_course->setItemText(2, QCoreApplication::translate("NKUCH", "\345\260\275\351\207\217\344\270\215\351\200\2112\345\210\206\347\232\204", nullptr));
        e_course->setItemText(3, QCoreApplication::translate("NKUCH", "\345\260\275\351\207\217\351\200\2112\345\210\206\344\273\245\344\270\212(\345\220\2532\345\210\206)", nullptr));
        e_course->setItemText(4, QCoreApplication::translate("NKUCH", "\345\260\275\351\207\217\351\200\2112\345\210\206\344\273\245\344\270\213(\345\220\2532\345\210\206)", nullptr));

        lineEdit_6->setText(QCoreApplication::translate("NKUCH", "\346\200\273\345\255\246\345\210\206\344\270\212\351\231\220", nullptr));
        lineEdit_7->setText(QCoreApplication::translate("NKUCH", "\346\200\273\345\255\246\345\210\206\344\270\213\351\231\220", nullptr));
        courseRate->setText(QCoreApplication::translate("NKUCH", "\350\256\276\347\275\256\344\274\230\345\205\210\345\272\246", nullptr));
        lineEdit->setText(QCoreApplication::translate("NKUCH", "\344\270\215\344\270\212\350\257\276\346\227\266\346\256\265", nullptr));
        week->setItemText(0, QCoreApplication::translate("NKUCH", "\344\270\200", nullptr));
        week->setItemText(1, QCoreApplication::translate("NKUCH", "\344\272\214", nullptr));
        week->setItemText(2, QCoreApplication::translate("NKUCH", "\344\270\211", nullptr));
        week->setItemText(3, QCoreApplication::translate("NKUCH", "\345\233\233", nullptr));
        week->setItemText(4, QCoreApplication::translate("NKUCH", "\344\272\224", nullptr));
        week->setItemText(5, QCoreApplication::translate("NKUCH", "\345\205\255", nullptr));
        week->setItemText(6, QCoreApplication::translate("NKUCH", "\346\227\245", nullptr));

        lineEdit_10->setText(QCoreApplication::translate("NKUCH", "\346\230\237\346\234\237", nullptr));
        lineEdit_11->setText(QCoreApplication::translate("NKUCH", "\350\265\267\345\247\213\350\257\276\347\250\213\350\212\202", nullptr));
        start->setItemText(0, QCoreApplication::translate("NKUCH", "1", nullptr));
        start->setItemText(1, QCoreApplication::translate("NKUCH", "2", nullptr));
        start->setItemText(2, QCoreApplication::translate("NKUCH", "3", nullptr));
        start->setItemText(3, QCoreApplication::translate("NKUCH", "4", nullptr));
        start->setItemText(4, QCoreApplication::translate("NKUCH", "5", nullptr));
        start->setItemText(5, QCoreApplication::translate("NKUCH", "6", nullptr));
        start->setItemText(6, QCoreApplication::translate("NKUCH", "7", nullptr));
        start->setItemText(7, QCoreApplication::translate("NKUCH", "8", nullptr));
        start->setItemText(8, QCoreApplication::translate("NKUCH", "9", nullptr));
        start->setItemText(9, QCoreApplication::translate("NKUCH", "10", nullptr));
        start->setItemText(10, QCoreApplication::translate("NKUCH", "11", nullptr));
        start->setItemText(11, QCoreApplication::translate("NKUCH", "12", nullptr));
        start->setItemText(12, QCoreApplication::translate("NKUCH", "13", nullptr));
        start->setItemText(13, QCoreApplication::translate("NKUCH", "14", nullptr));

        lineEdit_12->setText(QCoreApplication::translate("NKUCH", "\347\273\210\346\255\242\350\257\276\347\250\213\350\212\202", nullptr));
        end->setItemText(0, QCoreApplication::translate("NKUCH", "\345\220\214\344\270\212", nullptr));
        end->setItemText(1, QCoreApplication::translate("NKUCH", "1", nullptr));
        end->setItemText(2, QCoreApplication::translate("NKUCH", "2", nullptr));
        end->setItemText(3, QCoreApplication::translate("NKUCH", "3", nullptr));
        end->setItemText(4, QCoreApplication::translate("NKUCH", "4", nullptr));
        end->setItemText(5, QCoreApplication::translate("NKUCH", "5", nullptr));
        end->setItemText(6, QCoreApplication::translate("NKUCH", "6", nullptr));
        end->setItemText(7, QCoreApplication::translate("NKUCH", "7", nullptr));
        end->setItemText(8, QCoreApplication::translate("NKUCH", "8", nullptr));
        end->setItemText(9, QCoreApplication::translate("NKUCH", "9", nullptr));
        end->setItemText(10, QCoreApplication::translate("NKUCH", "10", nullptr));
        end->setItemText(11, QCoreApplication::translate("NKUCH", "11", nullptr));
        end->setItemText(12, QCoreApplication::translate("NKUCH", "12", nullptr));
        end->setItemText(13, QCoreApplication::translate("NKUCH", "13", nullptr));
        end->setItemText(14, QCoreApplication::translate("NKUCH", "14", nullptr));

        exceptionPush->setText(QCoreApplication::translate("NKUCH", "\346\267\273\345\212\240", nullptr));
        exceptionPop->setText(QCoreApplication::translate("NKUCH", "\345\210\240\351\231\244", nullptr));
        exceptionClear->setText(QCoreApplication::translate("NKUCH", "\345\205\250\351\203\250\345\210\240\351\231\244", nullptr));
        exceptionWeekend->setText(QCoreApplication::translate("NKUCH", "\345\221\250\346\234\253\344\270\215\344\270\212\350\257\276", nullptr));
        exceptionNoon->setText(QCoreApplication::translate("NKUCH", "\344\270\255\345\215\210\344\270\215\344\270\212\350\257\276", nullptr));
        exceptionNight->setText(QCoreApplication::translate("NKUCH", "\346\231\232\345\205\253\344\273\245\345\220\216\344\270\215\344\270\212\350\257\276", nullptr));
        run->setText(QCoreApplication::translate("NKUCH", "\347\224\237\346\210\220\346\216\250\350\215\220\350\257\276\350\241\250", nullptr));
        cancel->setText(QCoreApplication::translate("NKUCH", "\351\200\200\345\207\272\347\250\213\345\272\217", nullptr));
        intercampus->setText(QCoreApplication::translate("NKUCH", "\345\205\201\350\256\270\350\267\250\346\240\241\345\214\272\351\200\211\350\257\276", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("NKUCH", "\345\275\223\345\211\215\345\255\246\351\231\242/\344\270\223\344\270\232/\345\271\264\347\272\247/\346\240\241\345\214\272", nullptr));
        info->setMarkdown(QString());
        info->setHtml(QCoreApplication::translate("NKUCH", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:6px; margin-bottom:6px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p></body></html>", nullptr));
        reChoose->setText(QCoreApplication::translate("NKUCH", "\351\207\215\346\226\260\351\200\211\346\213\251\345\255\246\351\231\242/\344\270\223\344\270\232/\345\271\264\347\272\247/\346\240\241\345\214\272", nullptr));
        lineEdit_14->setText(QCoreApplication::translate("NKUCH", "\346\234\200\345\244\232\347\224\237\346\210\220\347\273\223\346\236\234\346\225\260", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("NKUCH", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600;\">\345\205\263\344\272\216\344\274\230\345\205\210\345\272\246\357\274\232</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\346\234\252\350\242\253\351\200\211\345\205\245\344\273\245\344\270\212\351\203\250\345\210\206\347\232\204\350\200\201\345\270\210/\345\274\200\350\257\276\345\255\246\351\231\242/\350\257\276\347\250\213\357\274\214\351\273\230\350\256\244\345\205\266\344\274\230\345\205\210\345\272\246\344\270\2721\343\200\202\344\274\230\345"
                        "\205\210\345\272\246\350\266\212\351\253\230\357\274\214\347\224\237\346\210\220\350\257\276\350\241\250\346\227\266\350\266\212\345\205\210\350\200\203\350\231\221\350\257\245\351\200\211\351\241\271\343\200\202</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\246\202\346\236\234\344\274\230\345\205\210\345\272\246\350\256\276\347\275\256\344\270\272100\357\274\214\350\257\245\351\241\271\345\260\206\346\234\200\345\205\210\350\242\253\350\200\203\350\231\221\357\274\233\345\246\202\346\236\234\344\274\230\345\205\210\345\272\246\350\256\276\347\275\256\344\270\2720\357\274\214\351\202\243\344\271\210\350\257\245\351\241\271\345\260\206\345\234\250\347\224\237\346\210\220\350\257\276\350\241\250\346\227\266\347\233\264\346\216\245\350\242\253\345\277\275\347\225\245\343\200\202</p></body></html>", nullptr));
        exceptionMorning->setText(QCoreApplication::translate("NKUCH", "\346\227\251\345\205\253\344\270\215\344\270\212\350\257\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NKUCH: public Ui_NKUCH {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NKUCH_H
