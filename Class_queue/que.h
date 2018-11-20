#ifndef QUE_H
#define QUE_H
#include <iostream>

using namespace std;


class Que
{
private:
    int* arr;
    int index;
    int Max;

public:
    Que(int quontity);
    ~Que();


    void Fill(){
        cout << "Enter " << Max << " numbers"<< endl;
        for (int i =0; i < Max; i++){
            cin >> arr[i];
        }
        cout << "[ ";
        for (int i =0; i < Max; i++){
            cout << "  " << arr[i];
        }
        cout << "]" << endl;
    }

    void Push(int a)
    {
        arr[Max] = a;
        Max++;
        cout << "After push " << a << endl;
        for (int i =0; i < Max; i++){
            cout << "  " << arr[i];
        }
        cout << endl;
        cout <<"In a queue is " << Max << " numbers.";
        cout << endl;
    }

    void Pop(){

        cout << "After pop " << endl;
        for (int i = 0; i < Max; i++)
        {
            int buff = 0;
            buff = arr[i+1];
            arr[i] =  buff;

        }
        Max--;
        for (int i =0; i < Max; i++){
            cout << "  " << arr[i];
        }
        cout << endl;
        cout <<"In a queue is " << Max << " numbers.";
        cout << endl;
    }

    int Front(){
        cout << "First number is " << arr[0] << endl;
        return arr[0];
    }
    int Back(){
        cout << "Last number is " << arr[Max - 1] << endl;
        return arr[Max - 1];
    }
};

#endif // QUE_H
