#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include "ckfind.h"
#include "ui_ckfind.h"

ckfind::ckfind(QWidget *parent) : QWidget(parent),
    ui(new Ui::ckfind)
{
    ui->setupUi(this);
    getTextFile();
}

ckfind::~ckfind()
{
    delete ui;
}

void ckfind::on_goButton_clicked()
{
    QString word = ui->lineEdit->text();
    ui->textEdit->find(word,QTextDocument::FindWholeWords);
}

void ckfind::getTextFile(){
    QFile myFile(":/ck.txt");
    myFile.open(QIODevice::ReadOnly);
    QTextStream textstream(&myFile);
    QString line = textstream.readAll();
    myFile.close();

    ui->textEdit->setPlainText(line);
    QTextCursor textcursor = ui->textEdit->textCursor();
    textcursor.movePosition(QTextCursor::Start,QTextCursor::MoveAnchor,1);
}
