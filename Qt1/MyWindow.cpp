#include "MyWindow.h"

#include <QDebug>

MyWindow::MyWindow(QWidget *parent) : QDialog(parent)
{
    lbl = new QLabel("&Введите текст");
    line = new QLineEdit;
    lbl->setBuddy(line);

    cb1 = new QCheckBox("Верхний регистр");
    cb2 = new QCheckBox("Инверсия");

    ok = new QPushButton("OK");
    ok->setDefault(true);
    ok->setEnabled(false);
    close = new QPushButton("Выход");

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(lbl);
    layout->addWidget(line);
    QVBoxLayout *left = new QVBoxLayout;
    left->addLayout(layout);
    left->addWidget(cb1);
    left->addWidget(cb2);
    QVBoxLayout *right = new QVBoxLayout;
    right->addWidget(ok);
    right->addWidget(close);

    QHBoxLayout *window = new QHBoxLayout;
    window->addLayout(left);
    window->addLayout(right);

    connect(line, SIGNAL(textChanged(QString)), this, SLOT(TextChanged(QString)));
    connect(close,SIGNAL(clicked()), this, SLOT(close()));
    connect(ok,SIGNAL(clicked()),this,SLOT(okClicked()));
    setLayout(window);
    setWindowTitle("Test1");


}

//void MyWindow::clickedOK(){
//    qDebug() << "ok";
//}
void MyWindow::TextChanged(QString str){
    ok->setEnabled(!str.isEmpty());
}

void MyWindow::okClicked(){
    if(!cb1->isChecked()&&!cb2->isChecked())
        emit Simple(line->text());
    if(cb1->isChecked()&&!cb2->isChecked())
        emit Registr(line->text());
    if(cb2->isChecked()&&!cb1->isChecked())
        emit Inverse(line->text());
    if(cb1->isChecked()&&cb2->isChecked())
        emit Two(line->text());

}

