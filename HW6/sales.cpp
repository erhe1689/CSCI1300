//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 6 - Problem 2

#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include <iomanip>
using namespace std;
string line;

int readSales(string fileName, string names[], int dataTable[][12], int arraySize){
    ifstream sales;
    int i = 0;
    double average;
    sales.open(fileName);
    if (sales.is_open()){
        for(int i = 0; i < arraySize; i++){
            if(!getline(sales,line)){
                arraySize = i;
                break;
            }
            names[i] = line;
            getline(sales, line);
            for(int j =0; j < 12; j++){
                dataTable[i][j] = stoi(line.substr(0, line.find(",")));
                line = line.erase(0, line.find(" ") + 1);
            }
        }
        
        for(int i = 0; i < arraySize; i++){
            for(int k = 0; k < 12; k++){
                average += dataTable[i][k];
            }
            average /= 12;
            cout << names[i] << ": " << setprecision(1) << fixed << average << endl;
            average = 0;
        }
        return arraySize;
    }
    else{
        return -1;
    }
    
}


int main(){
    int arraySize = 4;
    string names[arraySize];
    int dataTable[arraySize][12];
    readSales("sales.txt", names, dataTable, arraySize);
    
    return 0;
}