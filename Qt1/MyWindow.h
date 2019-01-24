#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QDialog>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QMessageBox>

class MyWindow : public QDialog
{
    Q_OBJECT

public:
    MyWindow(QWidget *parent = 0);
private:
    QLabel *lbl;
    QLineEdit *line;
    QCheckBox *cb1;
    QCheckBox *cb2;
    QPushButton *ok;
    QPushButton *close;
private slots:
    void TextChanged(QString str);
    void okClicked();
signals:
    void Registr(QString str);
    void Inverse(QString str);
    void Simple(QString);
    void Two(QString str);
};

class Str : public QObject
{
    Q_OBJECT

public slots:
    void Simple(QString str)
    {
        QMessageBox msg;
        msg.setText(str);
        msg.exec();
    }
    void Inversia(QString str)
    {
        QString result = str;

        for(int i = str.size(),j = 0;i >= 0; i--,j++)
        {
            result[j] = str[i];
        }
        QMessageBox msg;
        msg.setText(result);
        msg.exec();

    }
    void Reg(QString str)
    {
        QString result = str;
        QMessageBox msg;
        msg.setText(result.toUpper());
        msg.exec();


    }
    void Two(QString str)
    {
        QString result = str;

        for(int i = str.size(),j = 0;i >= 0; i--,j++)
        {
            result[j] = str[i];
        }
        result = result.toUpper();
        QMessageBox msg;
        msg.setText(result);
        msg.exec();
    }
};





#endif // MYWINDOW_H
