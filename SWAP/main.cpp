#include <QCoreApplication>
#include <iostream>

using namespace std;

template<typename T,typename T1, typename T2>

void swap(T1 a, T2 b){

    T1 buf = 0;
    buf = a;
    a = (T1)b;
    b = buf;
}

int main()
{

    double a = 10;
    double b = 2.3;
    cout << "a = " << a << " " << "b = " << b << endl;
    swap (a, b);
    cout << "a = " << a << " " << "b = " << b << endl;


    return 0;
}
