#include "videoplayer.h"
#include <QtWidgets/QApplication>
#include <bits/stdc++.h>
#include <QDesktopWidget>
using namespace std ;
int main(int argc, char *argv[])
{
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
    int hor,ver;
    cout << "Please mention the form of grid you would like:" << endl;
    cin >> hor >> ver;
    int height_of_each_video = height/ver ;
    int width_of_each_video = width/hor ;
    cout << height << " " << width << endl ;
    cout << height_of_each_video << " " << width_of_each_video << endl  ;
    VideoPlayer array_of_players[number_of_videos] ;
    int x=0,y=0,count1=0 ;
    while(ver)
    {
        x=0;
        for(int i=0;i<hor;i++)
        {
            cout << "printing" << " " << x << " " << y << endl;
            array_of_players[count1].resize(width_of_each_video,height_of_each_video);
            array_of_players[count1].move(x,y);
            x+=width_of_each_video;
            array_of_players[count1].setFixedHeight(height_of_each_video);
            array_of_players[count1].setFixedWidth(width_of_each_video);
            array_of_players[count1].show() ;
            count1++ ;
        }
        ver--;
        y+=height_of_each_video;
    }
    return app.exec();
}
