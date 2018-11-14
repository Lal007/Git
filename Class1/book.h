#ifndef BOOK_H
#define BOOK_H

class Book
{
private:
    int BookID;
    char* BookName;
    char* Author;
    unsigned int Quantity;
public:
    Book(void);
    void setBookID (int);
    void setBookName (char*);
    void setAuthor (char*);
    void setQuantity(unsigned int);
    int getBookID();
    char* getBookName();
    char* getAuthor();
    unsigned int getQuantity();

};

#endif // BOOK_H
