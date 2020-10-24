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
void printAllBooks(Book books[],int numBooks){
    if(numBooks <= 0) cout << "No books are stored" << endl;
    else{
        cout << "Here is a list of books" << endl;
        for(int i = 0; i < numBooks; i++){
            cout << books[i].getTitle() << " by ";
            cout << books[i].getAuthor() << endl;
        }
    }
}

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
        cout << "======Main Menu=====" << endl;
        cout << "1. Read books" << endl;
        cout << "2. Print all books" << endl;
        cout << "3. Quit" << endl;
        cin >> userInput;
        
        switch(userInput){
            case 1:{
                cout << "Enter a book file name:" << endl;
                cin >> userFile;
                int returnCase = readBooks(userFile, books, numBooksStored, 50);
                switch(returnCase){
                    case -1: {
                        cout << "No books saved to the database." << endl;
                        break;
                    }
                    case -2: {
                        cout << "Database is already full. No books were added." << endl;
                        break;
                    }
                    default: {
                        numBooksStored = returnCase;
                        cout << "Total books in the database: " << numBooksStored << endl; 
                    }
                }
                break;
            }
            case 2:{
                printAllBooks(books, numBooksStored);
                break;
            }
            case 3:{
                cout << "Good bye!" << endl;
                return 0;
            }
            default:{
                cout << "Invalid input." << endl;
            }
        }
    }
    while(true);
    return 0;
}
