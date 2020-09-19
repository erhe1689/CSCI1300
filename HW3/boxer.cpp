//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 3 - Problem 4
#include <iostream>
#include <iomanip>
using namespace std;

int weight1;
int weight2;
int weight3;

int main(){
    cout << "Enter boxers' weights" << endl;
    cin >> weight1;
    cin >> weight2;
    cin >> weight3;
    if( weight1 > weight2 && weight2 > weight3){
        cout << "Descending order" << endl;
        
    }
    else if (weight1 < weight2 && weight2 < weight3){
        cout << "Ascending order" << endl; 
    }
    else{
        cout << "Neither" << endl;
    }
    return 0;
}
