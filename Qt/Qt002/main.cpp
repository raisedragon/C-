#include "rplayer.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RPlayer w;
    w.show();

    return a.exec();
}
