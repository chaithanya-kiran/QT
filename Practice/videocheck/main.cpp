#include "mainwindow.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    VideoPlayer player;
    player.resize(320, 240);
    player.show();

    return app.exec();
}
