#include <QCoreApplication>
#include <iostream>

using namespace std;
int main()
{
    int N;
    int B = 0;

    cout << "Vvedit dlinu massiva -> " << endl;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; i++)
    {
        cout << "Vvedite znachenie " << i << " elementa ";
        cin  >> A[i];

    }

    for (int i = 0; i < N; i++)
    {
        B += A[i];
        cout << A[i] << endl;
    }
        cout << "Summa " << B;


    return 0;
}
