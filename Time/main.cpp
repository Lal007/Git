#include <QCoreApplication>
#include <iostream>

using namespace std;
int main()
{
    cout << "Vvedite secundi -> ";
    double seconds;
    double hour;
    double minute;
    int sec;
    cin >> seconds;

    hour = seconds / 3600;

    minute = seconds / 60 - (int(hour)*60);

    sec = int (seconds) % 60;

    cout << "Chasi: " << int (hour)<< endl << "Minuti: " << int (minute)<< endl << "Secundi: " << sec;

    return 0;
}
