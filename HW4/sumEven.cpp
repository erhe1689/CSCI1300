//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 4 - Problem 1
#include <iostream>
using namespace std;

int userNumber;
int sum;
int main(){
    cout << "Enter a positive number: " << endl;
    cin >> userNumber;
    if (userNumber < 0){cout << "Invalid number" << endl;
        return 0;
    }
    for(int i=0; i <= userNumber; i += 2){
        sum += i;
    }
    cout << "Sum: " << sum << endl;
    return 0;
}