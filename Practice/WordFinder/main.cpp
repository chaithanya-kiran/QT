#include "ckfind.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ckfind w;
    w.show();

    return a.exec();
}
