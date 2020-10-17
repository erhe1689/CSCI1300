//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 5 - Problem 1
#include <iostream>
#include <string>
using namespace std;

int main(){
    //Declaring the different arrays
    double temps[10];
    string colors[5] = {"Red", "Blue","Green","Cyan","Magenta"};
    int sequence[100];
    char letters[52];
    //temp array, setting each to -459.67
    for(int i = 0; i < 10; i++){
        temps[i]= -459.67;
    }
    //looping through and incrementing the first 1-100 positive integers
    for(int i = 1; i < 101; i++){
        sequence[i-1] = i;
    }
    //Loop for cycling through the alphabet, switching between lower/uppercase
    for(int i = 0; i < 52; i++){
        if((i % 2)==0){
            letters[i] = 'A' + (i / 2);
        }
        else letters[i] = 'a' + ((i - 1) / 2);
    }

//printing temps 10 times
    for( int i = 0; i < (sizeof(temps)/sizeof(double)); i++){
        cout << temps[i] << endl;
    }
    cout << endl;
//printing all the colors
    for( int i = 0; i < 5;i++){
        cout << colors[i] << endl;
    }
    cout << endl; 
//printing out the sequence 1-100
    for( int i = 0; i < (sizeof(sequence)/sizeof(int));i++){
        cout << sequence[i] << endl;
    }
    cout << endl;
//printing out alphabet alt lower/uppercase
    for( int i = 0; i < (sizeof(letters)/sizeof(char));i++){
        cout << letters[i] << " ";
        if( (i % 2) == 1){cout << endl;}
    }
}