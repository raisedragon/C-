#include "maindialog.h"
#include "ui_maindialog.h"
#include <QFile>
#include <QTextStream>
#include <QTextCodec>
#include <QByteArray>
#include <QUuid>
#include <QDebug>
#include <QDateTime>

MainDialog::MainDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MainDialog)
{
    ui->setupUi(this);
    connect(ui->enocde,SIGNAL(clicked()),this,SLOT(on_enocde_clicked()));
}

MainDialog::~MainDialog()
{
    delete ui;
}

void MainDialog::on_enocde_clicked()
{
    QString code = ui->inputFileCode->toPlainText();
    qDebug()<<code<<endl;
    //endoce base64
    QTextCodec *codec = QTextCodec::codecForName("UTF-8");
    QByteArray data = codec->fromUnicode(code);

    qint64 msecs = QDateTime::currentMSecsSinceEpoch();

    QString name = QString::number(msecs)+".txt";

    QString path = ui->outputPath->text();
    QString fullname = path + name;
    QFile file(fullname);
    file.open(QIODevice::WriteOnly);
    file.write(data);
    file.close();
    qDebug()<<fullname<<endl;
}
