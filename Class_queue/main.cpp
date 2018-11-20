#include <QCoreApplication>
#include <iostream>
#include <que.h>
using namespace std;
int main()
{

    Que qq(5);
    qq.Fill();
    qq.Push(6);
    qq.Push(7);
    qq.Pop();
    qq.Front();
    qq.Back();

    return 0;
}
