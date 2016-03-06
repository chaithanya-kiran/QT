#include "mainwindow.h"
#include <QApplication>
#include <QLabel>
#include <QPushButton>

#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    //QLabel *label = new QLabel("Welcome!");
    //label->show();

    //QPushButton *button = new QPushButton("Quit!");
    //QObject::connect(button,SIGNAL(clicked()),&a,SLOT(quit()));
    //button->show();

    /*QWidget *mainWindow = new QWidget;
    mainWindow->setWindowTitle("Hello CK");

    QSpinBox *spinner = new QSpinBox;
    spinner->setRange(1,100);
    spinner->setValue(50);
    QSlider *slider = new QSlider(Qt::Horizontal);
    slider->setRange(1,100);
    QObject::connect(spinner,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));
    QObject::connect(slider,SIGNAL(valueChanged(int)),spinner,SLOT(setValue(int)));

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(slider);
    layout->addWidget(spinner);
    mainWindow->setLayout(layout );
    mainWindow->show();
    return a.exec();*/

    QWidget *window = new QWidget;
    QPushButton *button1 = new QPushButton("One");
    QPushButton *button2 = new QPushButton("Two");
    QPushButton *button3 = new QPushButton("Three");
    QPushButton *button4 = new QPushButton("Four");
    QPushButton *button5 = new QPushButton("Five");

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(button1, 0, 0);
    layout->addWidget(button2, 0, 1);
    layout->addWidget(button3, 1, 0, 1, 2);
    layout->addWidget(button4, 2, 0);
    layout->addWidget(button5, 2, 1);

    window->setLayout(layout);
    window->show();
    return a.exec();
}
