#ifndef CKFIND_H
#define CKFIND_H

#include <QWidget>

namespace Ui {
class ckfind;
}

class ckfind : public QWidget
{
    Q_OBJECT

public:
    explicit ckfind(QWidget *parent = 0);
    ~ckfind();

private slots:
    void on_goButton_clicked();

private:
    Ui::ckfind *ui;
    void getTextFile();
};

#endif // CKFIND_H
