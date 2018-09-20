#include <QCoreApplication>
#include <iostream>

using namespace std;

int cont (int* arr1,int* arr2, int mas1,  int mas2){


    int size = mas1 + mas2;

    int arr3[size];

    for (int i = 0; i < mas1; i++)
    {

        arr3[i] = arr1[i];


    }

    for (int x = 0; x < mas2; x++)
    {

        arr3[x+(mas1)] = arr2[x];


    }
    cout << "Itogoviy massiv:" << endl;
    for (int c = 0; c < size; c++){

        cout << arr3[c] ;
    }

    return 0;

}

void vvod (int* arr1, int* arr2, int mas1,  int mas2){


    for (int i = 0;i < mas1; i++ ){
        cout << "Vvedite znachenie " << i << " elementa: ";
        cin >> arr1[i];
    }
    for (int n = 0;n < mas2; n++ ){
        cout << "Vvedite znachenie " << n << " elementa: ";
        cin >> arr2[n];
    }


}



int main()
{
    int * arr1;
    int * arr2;
    int mas1 = 0;
    int mas2 = 0;

    cout << "Vvedite razmer pervogo massiva -> ";

    cin >>  mas1;

    cout << "Vvedite razmer vtorogo massiva -> ";

    cin >>  mas2;

    arr1 = new int[mas1];
    arr2 = new int[mas2];
    vvod(arr1, arr2, mas1, mas2);

    for (int t = 0; t < mas1; t++){
        cout << arr1[t] << " , ";

    }
    for (int t = 0; t < mas2; t++){
    cout << arr2[t] << " , ";
    }
    cout << endl;

    cont(arr1, arr2, mas1, mas2);

    delete arr1;
    delete arr2;


    //string arr3 = arr1 + arr2;


    return 0;
}

