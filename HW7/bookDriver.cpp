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
    //book driver test cases
    Book book1 = Book();
    Book book2 = Book("Watermelon man", "Karl Marx", "Latin History");
    //testing getters for first book
    cout << book2.getTitle() << endl;
    cout << book2.getAuthor() << endl;
    cout << book2.getGenre() << endl;
    //testing setters for another book
    book1.setTitle("mango");
    book1.setAuthor("Barack Obama");
    book1.setGenre("US history");
    //confirming that getters get the right information
    cout << book1.getTitle() << endl;
    cout << book1.getAuthor() << endl;
    cout << book1.getGenre() << endl;
}