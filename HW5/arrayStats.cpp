//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 5 - Problem 2
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;

void stats(double data[],int arrayLength){
    //declaring variables
    double count = 0.0;
    double maximum = numeric_limits<double>::lowest();
    double minimum =numeric_limits<double>::max();
    //looping and compating each to maximum/minium and setting appropriately
    for(int i = 0; i < arrayLength; i++){
        if(data[i] > maximum){
            maximum = data[i];
        }
        if(data[i] < minimum){
            minimum = data[i];
        }
        //sum variable
        count += data[i];
    }
    //printing to terminal
    cout << "Min: " << setprecision(2) << fixed << minimum << endl;
    cout << "Max: " << setprecision(2) << fixed << maximum << endl;
    cout << "Avg: " << setprecision(2) << fixed << (count/arrayLength) << endl;
}


int main(){
    //test case
    double data[] = {1,2,3,7,6,43,1,4,6,73,32,3,56,12};
    int arrayLength = 14;
    stats(data,arrayLength);
    return 0;
}