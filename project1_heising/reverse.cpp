//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Project 1 - Problem 1

// this function takes a string as a user input, then prints the string in reverse order. 
#include <iostream>
#include <string>
using namespace std;
string userInput;

void reverse(string userInput){
    string reverseAns = userInput;
    for(int i = 0; i < userInput.length(); i++){
        reverseAns[i]= userInput[userInput.length()-1-i];
    }
    cout << reverseAns << endl;
}

int main(){
    cout << "Enter a string: " << endl;
    getline(cin, userInput);
    reverse(userInput);
    return 0;
}


