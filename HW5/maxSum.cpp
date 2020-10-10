//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 5 - Problem 4
#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;


int maxSum(int data[][10],int rows){
    int maximum = INT32_MIN;
    int count = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 10; j++){
             if(data[i][j] >= maximum){
                maximum = data[i][j];
            }
        }
        count += maximum;
        maximum = INT32_MIN;
    }
    return count;
} 

int main(){
    int data[2][10] = {
     {1, 2, 3, 4, 5, 10, 9, 8, 7, 6},
     {5, 1, 1, 1, 1, 1, 1, 1, 1, 1} 
     };
    cout << "returned value: " <<  maxSum(data, 2);
}