#include <QCoreApplication>
#include <iostream>

using namespace std;

void Feb (int n)
{
    double res[n];
    for (int i = 0; i < n; i++){
        res[i] = i;
    }
    for (int i = 0; i < n; i++){
        cout << res[i] << endl;
    }

    for (int i = 2; i <= n; i++){

        res[i] = (res[i-1]+res[i-2]);

    }
    for (int i = 0; i < n; i++){
        cout << "F "<< res[i] << endl;
    }

}

int main()
{
    Feb(10);

    return 0;
}
