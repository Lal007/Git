#include <QCoreApplication>
#include <iostream>

using namespace std;

template<typename T, typename T1>

void swap(T &a, T1 &b){

    T1 buf = 0;
    buf = a;
    a = b;
    b = buf;
   cout << "a = " << a << " " << "b = " << b << endl;
}

int main()
{

    float a = 10;
    double b = 2.3;
    cout << "a = " << a << " " << "b = " << b << endl;
    swap (a, b);
    //cout << "a = " << a << " " << "b = " << b << endl;




    return 0;
}
