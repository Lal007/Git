#include <QCoreApplication>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    int D;
    double x1, x2;
    cout << "Vvedite a, b, c " << endl;
    cin >> a >> b >> c;

    D = b * b - 4 * a * c;

    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / 2 * a;
        x2 = (-b - sqrt(D)) / 2 * a;
        cout <<"Discrimenant= " <<  D << "; x1= " << x1 << "; x= " << x2;
    }
     else if  (D == 0)
    {
            x1 = (-b + sqrt(D)) / 2 * a;
            cout << D << x1;
    }
            else cout << "Net deistvitelnih kornei";


    return 0;
}
