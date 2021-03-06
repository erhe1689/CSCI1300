//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 7 - Problem 6
//implementing the book class
#include "Book.h"
#include <string>
#include <cmath>
#include <iostream>
#include <fstream>
using namespace std;
//printAllBooks function
void printAllBooks(Book books[],int numBooks){
    if(numBooks <= 0) cout << "No books are stored" << endl;//checks for empty array
    else{
        cout << "Here is a list of books" << endl;
        for(int i = 0; i < numBooks; i++){//prints out all books with title and author
            cout << books[i].getTitle() << " by ";
            cout << books[i].getAuthor() << endl;
        }
    }
}
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
//readBooks functiom, comments found on other iteration of function
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
    int userInput;
    string userFile;
    int numBooksStored = 0;
    Book books[50];
    do{
        cout << "======Main Menu=====" << endl;//initial setup of menu
        cout << "1. Read books" << endl;
        cout << "2. Print all books" << endl;
        cout << "3. Quit" << endl;
        cin >> userInput;
        
        switch(userInput){//switching between user selected modes
            case 1:{
                cout << "Enter a book file name:" << endl;
                cin >> userFile;
                int returnCase = readBooks(userFile, books, numBooksStored, 50);
                switch(returnCase){
                    case -1: {
                        cout << "No books saved to the database." << endl; // empty database
                        break;
                    }
                    case -2: {
                        cout << "Database is already full. No books were added." << endl; // full database
                        break;
                    }
                    default: {
                        numBooksStored = returnCase;
                        cout << "Total books in the database: " << numBooksStored << endl;  // returns num of books in database
                    }
                }
                break;
            }
            case 2:{//calls printAllBooks function if user selects mode 2
                printAllBooks(books, numBooksStored);
                break;
            }
            case 3:{//prints good bye and quits the menu
                cout << "Good bye!" << endl;
                return 0;
            }
            default:{//covers invalid inputs out of menu range
                cout << "Invalid input." << endl;
            }
        }
    }
    while(true);
    return 0;
}
