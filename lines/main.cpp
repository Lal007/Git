#include <QCoreApplication>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, i = 1;
    string star = "*";
    string con = "*";
    cout << "Vvedite nomer stroki ";
    cin >> n;
    while (i <= n)
    {
    cout << star << endl;
    star += con;
    i++;
    }
    return 0;
}
