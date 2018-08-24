#include <QCoreApplication>
#include <iostream>

using namespace std;

int main()
{
    int buff = 0;
   //int A[] = {3, 9, 7, 5, 8, 1, 3, 2, 6, 0};

   int N = 0;
      cout << "Vvedite razmer massiva-> ";
   cin >> N;
   int A[N];

   for (int a = 0; a < N; a++)
   {
          cout  << "Vvedite znachenie " << a << " elementa: ";
          cin >> A[a];
    }
    //int size = sizeof(A)/sizeof(A[0]);
    for (int i = 0; i < N; i++ )
        for (int j = N - 1; j > i; j--)
            if (A[j-1] > A[j])
            {
                buff = A[j-1];
                A[j-1] = A[j];
                A[j] = buff;
            }
    for (int k = 0; k < N; k++)
        cout << A[k] << " ";

    return 0;
}
