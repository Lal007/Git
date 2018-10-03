#include <QCoreApplication>
#include <iostream>

using namespace std;

int main()
{
    int arr[3];
    int buff = 0;
    int max;
    int min;
    double res = 0;

    for (int i = 0; i < 3; i++){
        cout << "Enter " << i << " value ";
        cin >> arr[i];
     }

    for (int i = 0; i < 3; i++ )
        for (int j = 3 - 1; j > i; j--)
            if (arr[j-1] > arr[j])
            {
                buff = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = buff;

            }
    max = arr[2];
    min = arr[0];
    res = (double)max / (double)min;

   // for (int i = 0; i < 3; i++){
        //cout << arr[i];}
 cout << "Min = " << min << ", Max = " << max << ", Answer = " << (double)res;


    return 0;
}
