#include "loading.h"
#include "ui_loading.h"

Loading::Loading(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Loading)
{
    ui->setupUi(this);
}

Loading::~Loading()
{
    delete ui;
}
void Loading::addText(QString in)
{
    ui->textBrowser->append(in);
    ui->textBrowser->append("\n");
    repaint();
}
