//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 7 - Problem 5

//implementing the book class
#include "Book.h"
#include <string>
#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;

//print all books function

void printAllBooks(Book books[],int numBooks){
    //tests to make sure there are books stored in the array
    if(numBooks <= 0) cout << "No books are stored" << endl;
    else{
        cout << "Here is a list of books" << endl;
        //print ith book as long as there are still books in the array
        for(int i = 0; i < numBooks; i++){
            cout << books[i].getTitle() << " by ";
            cout << books[i].getAuthor() << endl;
        }
    }
}
//split function made previously
int split(string inputString, char splitter, string finalArray[], int arrayLength){
    //declaring variables
    int arraySpot = 0;
    int chunkLength = 0;
    for(int i = 0; i < inputString.length(); i += (chunkLength + 1)){
        //looping through string until the end of the string, adding chunksize cuts
        chunkLength = 0;
        while(inputString[i + chunkLength] != splitter && (i + chunkLength) < inputString.length()){
            //while each char isnt the splitter, make the chunklength longer
            chunkLength++;
        }
       finalArray[arraySpot] = inputString.substr(i, chunkLength); // find how many chunks/substrings
       arraySpot ++;
       if(arraySpot >= arrayLength){ // invalidation
           return -1;
       }
    }
    return arraySpot;
}
//read books function, comments found on other instance of function
int readBooks(string fileName, Book books[], int numBooksStored, int booksArrSize){
    ifstream file;
    string line;
    string arr[3];
    int i = numBooksStored;
    if(numBooksStored == booksArrSize) return -2;
    file.open(fileName);
    if(file.is_open()){
        while(getline(file,line) && i < booksArrSize){
            if(line != ""){
                split(line, ',', arr, 3);
                Book userBook = Book(arr[1],arr[0],arr[2]);
                books[i] = userBook;
                i++;
            }
        }
        return i;
    }
    return -1;
}



int main(){
    //test case for printAllBooks function
    Book books[20];
    readBooks("books.txt", books,0,20);
    printAllBooks(books,20);
    return 0;
}
