//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 5 - Problem 3
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;


int insert(int data[], int arrayLength, int size, int addedElement){
    //newValHold and oldvalHold are used to store initial value, replace it with new one, then continue along with the rest of the sequence
    int newValHold = addedElement;
    int oldValHold;
    if(arrayLength >= size){
        return arrayLength;
    }
    //cycles through array, figuring out where to insert new element
    for(int i = 0; i < arrayLength; i++){
        if(data[i] >= addedElement){
            oldValHold = data[i];
            data[i] = newValHold;
            newValHold = oldValHold;
        }
    }
    //newVal back into data
    data[arrayLength] = newValHold;
    //returns the length of the array, +1 to switch from index to value
    return arrayLength + 1;
}


int main(){
    //test case
    int data[10] = {1,1,3,4,5,5,5,6};
    int arrayLength = 8;
    int size = 10;
    int addedElement = 2;
    arrayLength = insert(data, arrayLength, size, addedElement);
    for(int i = 0; i  < (arrayLength); i++){
        cout << data[i] << " ";
    }
}