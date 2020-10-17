//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 6 - Problem 1

//including libraries
#include <iostream>
#include <string>
#include <fstream>
#include <limits>
using namespace std;

//declare and initialize max, min, and temp holding variables, userinput
string line;
string mostExpensive;
string leastExpensive;
double mostExpensivePrice = -1;
double leastExpensivePrice = numeric_limits<double>::max();
int lineCount = 0;
string userInput;

int main(){
    //prompts user to enter a file name
    cout << "Enter the file name:" << endl;
    cin >> userInput;
    ifstream products;
    //opens file 
    products.open(userInput);
    if (products.is_open()){
        //if loop runs as long as the products stream is open
        while(getline(products, line)){
            //keeps pulling line until there is nothing left to grab
            if(line != ""){
                string productName;
                double productPrice;
                //sets product name to first part of string until ,
                productName = line.substr(0,line.find(","));
                //finds price in the line and sets it equal to productprice
                productPrice = stod(line.substr(line.find(",") + 1, line.find("\0")-line.find(",")), NULL);
                //comparisons of max and min, resetting if necessary
                if(productPrice > mostExpensivePrice){
                    mostExpensivePrice = productPrice;
                    mostExpensive = productName;
                }
                if(productPrice < leastExpensivePrice){
                    leastExpensivePrice = productPrice;
                    leastExpensive = productName;
                }
                //line count incrementor
                lineCount++;
            }
        }
        //printing lines
        cout << "The number of lines: " << lineCount << endl;
        cout << "The most expensive product: " << mostExpensive << endl;
        cout << "The least expensive product: " << leastExpensive << endl;

    }
    else{
        // error case
        cout << "Could not open file." << endl;
    }

}