//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 2 - Problem 6
#include <iostream>
#include <cmath> 
using namespace std;
double radius;
double volume;
double surfaceArea;

int main(){
    cout << "Enter a radius: " << endl;
    cin >> radius;
    volume = 4/3.0 * M_PI * pow(radius,3);
    surfaceArea = 4.0 * M_PI * pow(radius,2);

    cout << "Volume: " << volume << endl;
    cout << "Surface area: " << surfaceArea << endl;
    return 0;
}