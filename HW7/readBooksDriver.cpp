//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 7 - Problem 4

//implementing the book class
#include "Book.h"
#include <string>
#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;

//previously made split function
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

int readBooks(string fileName, Book books[], int numBooksStored, int booksArrSize){//declaring parameters
    ifstream file; // starting stream
    string line;
    string arr[3];
    int i = numBooksStored;
    if(numBooksStored == booksArrSize) return -2; // checking error case
    file.open(fileName); // opening file
    if(file.is_open()){ // loop as long as file is open
        while(getline(file,line) && i < booksArrSize){ // loops as long as there are lines of data and books left
            if(line != ""){ 
                split(line, ',', arr, 3); // split line into array components ","
                Book userBook = Book(arr[1],arr[0],arr[2]); // define as book class
                books[i] = userBook;
                i++; // incrementor
            }
        }
        return i; // default return
    }
    return -1; // other error case covered
}


int main(){
    //test case, 20 books in array, prints author, title, genre in respective order
    Book books[20];
    readBooks("books.txt", books,0,20);
    for(int i = 0; i < 20; i++){
        cout << books[i].getAuthor() << " ";
        cout << books[i].getTitle() << " ";
        cout << books[i].getGenre() << endl;

    }
    return 0;
}