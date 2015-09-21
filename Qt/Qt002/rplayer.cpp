#include "rplayer.h"
#include "ui_rplayer.h"

RPlayer::RPlayer(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RPlayer)
{
    ui->setupUi(this);
}

RPlayer::~RPlayer()
{
    delete ui;
}
