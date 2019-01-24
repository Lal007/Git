#include <QApplication>
#include "MyWindow.h"
#include "login.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login *pass = new Login;
    pass ->show();
    MyWindow *nwindow = new MyWindow();
    //nwindow->show();
    Str *b = new Str;
    QObject::connect(nwindow,SIGNAL(Simple(QString)),b,SLOT(Simple(QString)));
    QObject::connect(nwindow,SIGNAL(Two(QString)),b,SLOT(Two(QString)));
    QObject::connect(nwindow, SIGNAL(Inverse(QString)),b,SLOT(Inversia(QString)));
    QObject::connect(nwindow, SIGNAL(Registr(QString)),b,SLOT(Reg(QString)));
    QObject::connect(pass, SIGNAL(correct()), nwindow,SLOT(show()));



    return a.exec();
}
