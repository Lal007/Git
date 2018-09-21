#include <QCoreApplication>
#include <iostream>

using namespace std;

int cont (int arr1[],int arr2[]){

    int size1 = sizeof(arr1);
    int size2 = sizeof(arr2);
    int size = size1 + size2;

    int arr3[size];

    for (int i = 0; i <= size1; i++)
    {
        //int tmp = arr1[i];
        //arr3[i] = tmp;
        arr3[i] = arr1[i];


    }
    for (int x = 0; x <= size2; x++)
    {

        arr3[x+size1] = arr2[x];


    }
    for (int c = 0; c < size; c++){

        cout << arr3[c] ;
    }
    cout << endl << "Debug " << size1 << " " << size2;
     return 0;

}




int main()
{
    int arr1[] = {1,1,1,1};
    int arr2[] = {2,2,2,2, 2};

    cont(arr1, arr2);

    //string arr3 = arr1 + arr2;


    return 0;
}

