//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 7 - Problem 3 

//implementing the book class
#include "Book.h"
#include <string>
#include <cmath>
#include <iostream>
using namespace std;

int main(){
    Book book1 = Book();
    Book book2 = Book("Watermelon man", "Karl Marx", "Latin History");
    cout << book2.getTitle() << endl;
    cout << book2.getAuthor() << endl;
    cout << book2.getGenre() << endl;
    book1.setTitle("mango");
    book1.setAuthor("Barack Obama");
    book1.setGenre("US history");
    cout << book1.getTitle() << endl;
    cout << book1.getAuthor() << endl;
    cout << book1.getGenre() << endl;
}