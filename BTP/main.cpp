#include "videoplayer.h"
#include <stdio.h>
#include <iostream>
#include <QtWidgets/QApplication>
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
    cout << "ck grid?" << endl;
    cin >> m >> n;
    cout << m << n;
 //   QHBoxLayout *layout = new QHBoxLayout;
    QGridLayout *layout = new QGridLayout;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            QWidget *Player = new VideoPlayer;
            Player->resize(400,350);
            layout->addWidget(Player,i,j);
        }
    }
    //layout->addWidget(Player,0,0);
    //layout->addWidget(Player1,1,1);

    window->setLayout(layout);
    window->show();
    return app.exec();
}
