#include "maindialog.h"
#include "ui_maindialog.h"
#include <QFile>
#include <QTextStream>
#include <QTextCodec>
#include <QByteArray>
#include <QUuid>
#include <QDebug>
#include <QDateTime>
#include <base64_coder.h>

MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDialog)
{
    ui->setupUi(this);
    //connect(ui->enocde,SIGNAL(clicked()),this,SLOT(on_enocde_clicked()));
}

MainDialog::~MainDialog()
{
    delete ui;
}

void MainDialog::on_enocde_clicked()
{
    QString code = ui->inputFileCode->toPlainText();
    qDebug()<<code<<endl;
    string base64_str =code.toStdString();
    string output_str;

    Base64Coder::Base64Decode(base64_str, &output_str);
    cout<<"decode: \n"<<output_str<<endl;


    //endoce base64
    QString qOutput_str=QString::fromStdString(output_str);
    QByteArray data = qOutput_str.toUtf8();


    qint64 msecs = QDateTime::currentMSecsSinceEpoch();

    QString name = QString::number(msecs)+".pdf";

    QString path = ui->outputPath->text();
    QString fullname = path + name;
    QFile file(fullname);
    file.open(QIODevice::WriteOnly);
    file.write(data);
    file.close();
    qDebug()<<fullname<<endl;
}
