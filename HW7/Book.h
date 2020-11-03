//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 7 - Problem 3 .h file

//Header
#ifndef BOOK_H
#define BOOK_H
#include <string>

using namespace std;
//book class
class Book
{
public:

    Book();//default constructor
    Book(string title, string author, string genre);//parametrized constructor
    string getTitle() const; //title getter
    void setTitle(string title_1);//title setter
    string getAuthor() const;//author getter
    void setAuthor(string author_1);//author setter
    string getGenre() const;//genre getter
    void setGenre(string genre_1);//genre setter

private:
//private variables
    string title;
    string author;
    string genre;

};
#endif