//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 4 - Problem 2
#include <iostream>
using namespace std;

int userNumber;

int main(){
    cout << "Enter a positive number: " << endl;
    cin >> userNumber;
    if(userNumber <= 0){
        cout<<"invalid number"<<endl;
    }
    while(userNumber != 1){
        cout << userNumber << endl;
        if((userNumber % 2) == 0){
            userNumber /= 2;
        }
        else{
            userNumber = (3 * userNumber) + 1;
        }
        
    }
    cout << "1" << endl;
    return 0;
}