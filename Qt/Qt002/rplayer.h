#ifndef RPLAYER_H
#define RPLAYER_H

#include <QDialog>

namespace Ui {
class RPlayer;
}

class RPlayer : public QDialog
{
    Q_OBJECT

public:
    explicit RPlayer(QWidget *parent = 0);
    ~RPlayer();

private:
    Ui::RPlayer *ui;
};

#endif // RPLAYER_H
