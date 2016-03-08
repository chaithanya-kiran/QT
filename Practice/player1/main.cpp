#include "dialog.h"
#include <QApplication>

#include <QMediaPlayer>
#include <QVideoWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Dialog w;
    //w.show();

    QMediaPlayer *player = new QMediaPlayer;
    QVideoWidget *vw = new QVideoWidget;

    player->setVideoOutput(vw);
    player->setMedia(QUrl::fromLocalFile("/home/chaithanya/Videos/ck.mpeg"));

    vw->setGeometry(500,100,400,300);
    vw->show();
    player->play();
    qDebug() << player->state();

    return a.exec();
}
