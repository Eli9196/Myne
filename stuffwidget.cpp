
#include "stuffwidget.h"
#include "./ui_stuffwidget.h"
#include "stuffwriter.h"


stuffWidget::stuffWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::stuffWidget)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Permanent");
    ui->comboBox->addItem("Part-time");
    ui->comboBox->addItem("Contract");
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(read()));
}

stuffWidget::~stuffWidget()
{
    delete ui;
}

void stuffWidget::read()
{
    QString name = ui->lineEdit->text();
    QDate date = ui->dateEdit->date();
    QString stuffType = ui->comboBox->currentText();
    stuff s(name,date,stuffType);
    list.addstuff(s);
    stuffWriter writer(s);

    ui->lineEdit->clear();
    ui->lineEdit->setFocus();
    ui->dateEdit->setDate(QDate::currentDate());

}



