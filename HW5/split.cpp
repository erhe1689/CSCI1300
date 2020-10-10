//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 5 - Problem 5
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;


int split(string inputString, char splitter, string finalArray[], int arrayLength){
    int arraySpot = 0;
    int chunkLength = 0;
    for(int i = 0; i < inputString.length(); i += (chunkLength + 1)){
        chunkLength = 0;
        while(inputString[i + chunkLength] != splitter && (i + chunkLength) < inputString.length()){
            chunkLength++;
        }
       finalArray[arraySpot] = inputString.substr(i, chunkLength);
       arraySpot ++;
       if(arraySpot >= arrayLength){
           return -1;
       }
    }
    return arraySpot;
}



int main(){
    string inputString = "Albanians/Seized/My/Children";
    char splitter = '/';
    string data[4];
    int arraySpot = split(inputString, splitter, data, 4);
    for (int i=0 ; i < 4; i++)
        cout << "data["<< i << "]:" << data[i] << endl;
    cout << "Function returned value: " << arraySpot << endl;
    return 0;
}