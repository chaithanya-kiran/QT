#include "videoplayer.h"
#include <QtWidgets/QApplication>
#include <bits/stdc++.h>
#include <QDesktopWidget>
using namespace std ;
int main(int argc, char *argv[])
{
    //string s ;
    //cout << "hello" ;
    //cout << "Select the Number of videos U select" ;
    //getline(cin,s) ;
    //cout << s ;
    QApplication app(argc, argv);
   // QWidget window ;
    QRect rec = QApplication::desktop()->screenGeometry();
    int height = rec.height();
    int width = rec.width();
    //window.resize(height,width);
    //window.show();
    //cout << height << " " << width << "\n" ;
    int number_of_videos ;
    cout << "Please Select the number of videos\n" ;
    cin >> number_of_videos ;
    int height_of_each_video = height/2 ;
    int width_of_each_video = width/number_of_videos ;
    VideoPlayer array_of_players[number_of_videos] ;
    const int a=0,b=0 ;
    for(int i=0;i<number_of_videos;i++)
    {
        array_of_players[i].resize(width_of_each_video,height_of_each_video);
       // array_of_players[i].geometry().setX(a);
        //array_of_players[i].geometry().setY(b);
        array_of_players[i].setFixedHeight(height_of_each_video);
        array_of_players[i].setFixedWidth(width_of_each_video);
        array_of_players[i].show() ;
       // a = a+ width_of_each_video ;
    }
    /*
    VideoPlayer player;
    player.resize(600,350);
    player.show();
    VideoPlayer player1 ;
    player1.resize(600,350);
    player1.show();
    VideoPlayer player2 ;
    player2.resize(600,350);
    player2.show();
    VideoPlayer player3 ;
    player3.resize(600,350);
    player3.show();
    */
    return app.exec();
}
