#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main()
{

    int N,M;
    cout << "Vvedite razmer massiva1: ";
    cin >> N >> M;

    double **p;
    p = new double*[N];
    for(int i = 0; i < N; i++)
    {
        p[i] = new double[M];

            for(int j = 0; j < M; j++)
        {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> p[i][j];
            }
            }
    // выводим первую матрицу:
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        cout << p[i][j] << " ";
        cout << endl;
    }
    cout << "N = " << N << " M = " << M << endl;

    int N1,M1;
    cout << "Vvedite razmer massiva2: ";
    cin >> N1 >> M1;
    if (N != M1)
    {
        cout << "TEBE NELZYA!!!";
        return 0;
    }

    double **p1;
    p1 = new double*[N1];
    for(int i = 0; i < N1; i++)
    {
        p1[i] = new double[M1];


        for(int j = 0; j < M1; j++)
        {
            cout << "a[" << i << "][" << j << "]= ";
            cin >> p1[i][j];
        }

    }
    // выводим вторую матрицу:
    for (int i = 0; i < N1; i++)
    {
        for(int j = 0; j < M1; j++)
        cout << p1[i][j] << " ";
        cout << endl;
}
    cout << "N1 = " << N1 << " M1 = " << M1 << endl;


    double **p2;
    p2 = new double*[N];
    for(int i = 0; i < N; i++)
    {
        p2[i] = new double[M1];

        for(int j = 0; j < M1; j++)
        {
            p2[i][j] = 0;
            for (int m = 0; m < N1; m++)
                p2[i][j] += p[i][m] * p1[m][j];

        }

     }



    // выводим итоговую матрицу:
    cout << "Itogovaya matriza" << endl;
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < M1; j++)
        cout << p2[i][j]<< " ";
        cout << endl;
    }
     cin.get(); cin.get();
        return 0;
    }
