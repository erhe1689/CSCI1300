//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 4 - Problem 5
#include <iostream>
#include <string>
using namespace std;

int userHeight;
char charPosition = 'a';


int main(){
    cout << "Enter the height: " << endl;
    cin >> userHeight;
    for(int i = 0; i < userHeight; i++){
        for(int j = 0; j < (userHeight - i); j++){
            cout << charPosition;
            charPosition++;
            if(charPosition > 'z'){
                charPosition = 'a';
            }
        } 
        cout << endl;
    }
    return 0;
    }