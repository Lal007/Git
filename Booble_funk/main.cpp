#include <QCoreApplication>
#include <iostream>

using namespace std;

void bubble(int* ar, int length)
{
    for (int i = length - 1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if (ar[j] > ar[j + 1])
            {
                int tmp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = tmp;
            }
        }
    }

}



int main()
{
    int size = 0;

    cout << "Vvedite razmer massiva" << endl;
    cin >> size;
     int ar[size];
    cout << "Vvedite massiv" << endl;

    for (int i = 0; i < size; i++ )
    {
        cin >> ar[i];
    }
    for (int n = 0; n < size; n++){


    cout <<"Element " << n << " raven: " <<  ar[n] << endl;
    }

    bubble(ar, size);

    cout << "Posle sortirovki!!!";
    cout << size << endl;

            for (int m = 0; m < size; m++)

    {
    cout << "Element " << m << "raven: " << ar[m] << endl;
    }
            return 0;
}
