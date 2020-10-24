//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 7 - Problem 3 .h file

//Header
#ifndef BOOK_H
#define BOOK_H
#include <string>

using namespace std;

class Book
{
public:
    Book();
    Book(string title, string author, string genre);
    string getTitle() const;
    void setTitle(string title_1);
    string getAuthor() const;
    void setAuthor(string author_1);
    string getGenre() const;
    void setGenre(string genre_1);

private:
    string title;
    string author;
    string genre;

};
#endif