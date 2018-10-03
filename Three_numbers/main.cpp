#include <QCoreApplication>
#include <iostream>

using namespace std;

int main()
{

    int one;
    int two;
    int three;
    int max;
    int min;
    double res;

    cout << "Enter three numbers: " << endl;
    cin >> one;
    cin >> two;
    cin >> three;

    if (one > two)
    {
        max = one;
        min = two;
    }
    else
    {
        max = two;
        min = one;
    }


    if (max < three)
    {
        max = three;
    }
    if (min > three)
    {
        min = three;
    }

   res = (double)max / (double)min;

    cout << "Min = " << min << ", Max = " << max << ", Answer = " << (double)res;

}
