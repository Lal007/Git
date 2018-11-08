#include <QCoreApplication>
#include <iostream>

using namespace std;

template<typename T, typename T1>

void swap(T &a, T1 &b){

    T buf = 0;
    buf = a;
    a = b;
    b = buf;

}

int main()
{

    double a = 10.1;
    float b = 2.3;
    cout << "a = " << a << " " << "b = " << b << endl;
    swap (a, b);
    cout << "a = " << a << " " << "b = " << b << endl;




    return 0;
}
