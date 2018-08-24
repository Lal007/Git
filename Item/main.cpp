#include <QCoreApplication>
#include <iostream>

using namespace std;

int main()
{
   double item_cost;
   double quantity;
   double cash;
   cout << "Vvedite stoimost' ";
   cin >> item_cost;
   cout << "VVdeite kol-vo deneg ";
   cin >> cash;

   quantity = cash / item_cost;

   cout << "Tebe hvatit na: " << int (quantity) << " shtuk";


    return 0;
}
