#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QMessageBox>

class Login : public QWidget
{
    Q_OBJECT
public:
    explicit Login(QWidget *parent = 0);
private:
    QLabel *lbl;
    QLineEdit *line;
    QPushButton *ok;

signals:
    void correct();

public slots:
    void check();

};

#endif
