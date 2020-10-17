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
    //declaring variables
    int arraySpot = 0;
    int chunkLength = 0;
    for(int i = 0; i < inputString.length(); i += (chunkLength + 1)){
        //looping through string until the end of the string, adding chunksize cuts
        chunkLength = 0;
        while(inputString[i + chunkLength] != splitter && (i + chunkLength) < inputString.length()){
            //while each char isnt the splitter, make the chunklength longer
            chunkLength++;
        }
       finalArray[arraySpot] = inputString.substr(i, chunkLength); // find how many chunks/substrings
       arraySpot ++;
       if(arraySpot >= arrayLength){ // invalidation
           return -1;
       }
    }
    return arraySpot;
}



int main(){
    //test case
    string inputString = "Albanians/Seized/My/Children";
    char splitter = '/';
    string data[4];
    int arraySpot = split(inputString, splitter, data, 4);
    for (int i=0 ; i < 4; i++)
        cout << "data["<< i << "]:" << data[i] << endl;
    cout << "Function returned value: " << arraySpot << endl;
    return 0;
}