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

    QWidget *mainWindow = new QWidget;
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
    return a.exec();
}
