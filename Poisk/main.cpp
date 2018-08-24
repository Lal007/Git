#include <QCoreApplication>
#include <iostream>

using namespace std;
int main()
{
    int F;
    bool T = false;
    cout << "Vvedite iskomoe znachenie -> ";
    cin >>  F;
    int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int size = sizeof(A)/sizeof(A[0]);

    for (int i = 0;i < size; i++)
    {
        if (A[i] == F)
        {
            cout << "Indeks znachenia " << F << " ----> " << i;
            T = true;
            break;
        }

    }
    if (T == false)
    cout << "-1";
    return 0;
}
