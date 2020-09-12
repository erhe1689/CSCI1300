//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 2 - Problem 3
#include <iostream>
#include <iomanip>
using namespace std;
double fahrenheit;
double celsius;

int main(){
    cout << "Enter a temperature in Fahrenheit:" << endl;
    cin >> fahrenheit;
    celsius = 5/9.0 * (fahrenheit - 32);

    cout << "The temperature " << fahrenheit << " degrees Fahrenheit is " << setprecision(2) << fixed << celsius << " degrees Celsius." << endl;
    return 0;
}
