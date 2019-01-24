#include "login.h"
#include <QMessageBox>

Login::Login(QWidget *parent) :
    QWidget(parent)
{
    lbl = new QLabel("Введите пароль");
    line = new QLineEdit;
    ok = new QPushButton("OK");

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(lbl);
    layout->addWidget(line);
    QHBoxLayout *down = new QHBoxLayout;
    down->addWidget(ok);
    QVBoxLayout *main = new QVBoxLayout;
    main->addLayout(layout);
    main->addLayout(down);
    setLayout(main);
    connect(ok,SIGNAL(clicked()),this,SLOT(check()));
}

void Login::check()
{
    if(line->text() == "12345"){
        QMessageBox msg;
        msg.setText("Correct");
        msg.exec();
        this->close();
        emit correct();

} else {
       QMessageBox msg;
        msg.setText("Incorrect");
        msg.exec();
}

}
