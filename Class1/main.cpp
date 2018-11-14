#include <QCoreApplication>
#include <iostream>
#include <book.h>

using namespace std;

int main()
{
    Book a;

    a.setBookID(100);
    a.setAuthor("Pushkin");
    a.setQuantity(500);
    a.setBookName("Onegin");
    cout << "BookId: " << a.getBookID() << endl;
    cout << "Author: " << a.getAuthor() << endl;
    cout << "Book name: " <<a.getBookName() << endl;
    cout << "Pages: "<< a.getQuantity() << endl;
    return 0;
}
