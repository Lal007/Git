#include <iostream>
#include <string>
#include <cctype>

using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");

    int N,M;
    cout << "Vvedite razmer massiva1: ";
    cin >> N >> M;

    int **p = new int*[N];
    for(int i = 0; i < N; i++)
    {
        p[i] = new int[M];
    }
    for (int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            p[i][j]=0;
            cout << p[i][j];

            // for (int m =0; m < N; m++)
            //   {
            //     p[i][j] += (p[i][j])*(p[i][j]);
            //   }
        }


        cout << endl;
    }

    int N1,M1;
    cout << "Vvedite razmer massiva2: ";
    cin >> N1 >> M1;

    int **p1 = new int*[N1];
    for(int i = 0; i < N1; i++)
    {
        p1[i] = new int[M1];
    }
    for (int i = 0; i < N1; i++)
    {
        for(int j = 0; j < M1; j++)
        {
            p1[i][j]=0;
            cout << p1[i][j];
        }
        cout << endl;
    }
    //  cout << p[i][j];





    int **p2 = new int*[M];
    for(int i = 0; i < M; i++)
    {
        p1[i] = new int[N1];
    }
    for (int i = 0; i < M; i++)
    {
        for(int j = 0; j < M; j++)
        {
            p2[i][j]=0;
            cout << p1[i][j];

        }

     }
    cout << p2;
        return 0;
    }
