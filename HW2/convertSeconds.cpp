//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 2 - Problem 5
#include <iostream>
using namespace std;
int userSeconds;
int hours;
int minutes;
int seconds;

int main(){
    cout << "Enter a number of seconds: " << endl;
    cin >> userSeconds;
    hours = userSeconds / 3600;
    minutes = (userSeconds % 3600) / 60;
    seconds = (userSeconds % 3600) % 60;
    cout << hours << " hour(s) " << minutes << " minute(s) " << seconds << " second(s)" << endl;
    return 0;
}
