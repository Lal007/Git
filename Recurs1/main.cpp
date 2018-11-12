#include <QCoreApplication>
#include <iostream>

using namespace std;

void Fak (int n, int arr[])
{

    for (int i = 0; i < n; i++)
    {
        arr[i] = i+1;

    }

    for (int i = 0; i < n; i++)
    {
        //if n =
        cout << arr[i] << "  " ;
    }
    cout << endl;
    int res = 1;
    for (int i = 0; i < n; i++)
    {

        res *= arr[i];

    }
    cout << "Faktorial! = " << res << endl;
}

int Fuk (int n) {

    if (n == 1 || n == 0){
        return 1;
    } else {

        return n * Fuk(n-1);

    }

}

int main()
{
    int n = 0;
    cout << "Vvedite faktorial: ";
    cin >> n;
    if (n < 0){

        cout << "Nedopustimo";
    } else {
        int arr[n];
        Fak (n, arr);
        cout << "Rekursiv factorial " << Fuk(n);
    }

    return 0;
}
