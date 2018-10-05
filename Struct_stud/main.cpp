#include <QCoreApplication>
#include <iostream>
#include <QList>

using namespace std;



struct stud
{
    string name;
    string surname;
    string group;
    double scholarship;

};

void filling (stud *x )
{
    cout << "Enter Name ";
    cin >> x->name;
    cout << "Enter Surename ";
    cin >> x->surname;
    cout << "Enter group ";
    cin >> x->group;
    cout << "Enter scholarship ";
    cin >> x->scholarship;
}


int main()
{
    QList <stud*> list;

    for (;;)
    {
        stud* a = new stud();
        char y;
        filling(a);
        list.append(a);


        cout << "Continue filling? y/n ";
        cin >> y;

        if (y == 'n')
        {
            break;
        }

    }

    int size = list.size();
    cout << "Size = " << size << endl;
    for(int i = 0; i < size; i++){

        cout <<"Name " << list.at(i)->name << endl;
        cout <<"Surname " << list.at(i)->surname << endl;
        cout <<"Group " << list.at(i)->group << endl;
        cout <<"Scholarship " << list.at(i)->scholarship << endl;

    }
    list.clear();



    return 0;
}
