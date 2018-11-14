#include "book.h"

Book::Book()
{
}
void Book::setBookID (int id){
    BookID = id;
}
void Book::setBookName (char* name){
    BookName = name;
}
void Book::setAuthor (char* author){
    Author = author;
}

void Book::setQuantity(unsigned int qouan){
    Quantity = qouan;
}

int Book::getBookID(){
    return BookID;
}

char* Book::getBookName(){
    return BookName;
}

char* Book::getAuthor(){
    return Author;
}

unsigned int Book::getQuantity(){
    return Quantity;
}
