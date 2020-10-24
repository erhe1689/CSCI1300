//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 7 - Problem 3 

//implementing the book class
#include "Book.h"
#include <string>
#include <cmath>
using namespace std;

Book::Book(){ // default constructor
    title = ""; //setting all to blank strings
    author = "";
    genre = "";
}

Book::Book(string title_1, string author_1, string genre_1){ // parameterized constructor
    title = title_1; // setting all to user input
    author = author_1;
    genre = genre_1;
}

string Book::getTitle() const{ // getter for title
    return title;
}

string Book::getAuthor() const{ // getter for author
    return author;
}

string Book::getGenre() const{ // getter for genre0
    return genre;
}

void Book::setTitle(string a){ // setter for title
    title = a;
    return;
}

void Book::setAuthor(string b){ // setter for author
    author = b;
    return;
}

void Book::setGenre(string c){ // setter for genre
    genre = c;
    return;
}

