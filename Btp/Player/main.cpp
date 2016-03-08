#include "videoplayer.h"
#include <QtWidgets/QApplication>

#include <iostream>
#include <bits/stdc++.h>

#include <QDesktopWidget>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

#include <QDebug>

using namespace std ;
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget *window = new QWidget;
    int m,n;

    //qDebug() << "hello ck size of grid you would like?" << endl;
    //cout << "ck grid?" << endl;
    //cin >> m;
    //qDebug() << m << endl;

    QSpinBox *spinner = new QSpinBox;
    spinner->setRange(1,100);
    spinner->setValue(50);
    spinner->setGeometry(10,40,180,30);

    QSlider *slider = new QSlider(Qt::Horizontal);
    slider->setRange(1,100);

    QObject::connect(spinner,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),spinner,SLOT(setValue(int)));


    //QHBoxLayout *layout = new QHBoxLayout;
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(slider,0,1);
    layout->addWidget(spinner,0,2);

    m=2;n=4;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            QWidget *Player = new VideoPlayer;
            Player->resize(400,350);
            layout->addWidget(Player,i+1,j);
        }
    }
    //layout->addWidget(Player,0,0);
    //layout->addWidget(Player1,1,1);

    window->setLayout(layout);
    //window->resize(QApplication::desktop()->size());
    //window->showFullScreen();
    window->show();
    return app.exec();
}
