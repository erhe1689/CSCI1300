//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 4 - Problem EC
#include <iostream>
#include <string>
using namespace std;
int userLength;
int check;


int main(){
    cout << "Enter the length: " << endl;
    cin >> userLength;

    for(int i = 0; i <= ((2 * userLength) - 1); i++){
        if(i >= userLength){
            check -= 1;
        }
        else{
            check = i;
        }
        for(int k = 0; k < (userLength - check);k++){
            cout << ' ';

        }
        for(int j = 0; j < ((2 * check) + 1); j++){
           cout << '*';
            
        } 
        cout << endl;
    }
    return 0;
    }