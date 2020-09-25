//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 4 - Problem 5
#include <iostream>
#include <string>
using namespace std;

string searchString;
string subString;
int searchLength, subLength, occurances;

int main(){
    cout << "Enter the search string: " << endl;
    cin >> searchString;
    cout << "Enter the substring to be searched: "<< endl;
    cin >> subString;
    searchLength = searchString.length();
    subLength = subString.length();
    
    for(int i = 0; i < (searchLength - (subLength - 1)); i++){
        if(searchString.substr(i,subLength) == subString){
            occurances ++;
        }

    }
    cout << "Number of occurrences: " << occurances << endl;
    return 0;

}
