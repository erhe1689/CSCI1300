#include <iostream>
#include <string>
#include <fstream>
#include <limits>
#include <iomanip>
using namespace std;


void printSeriesSkipFour(int maxValue){
    int sum = 0;
    int i = 1;
    while (i <= maxValue){
        if (i%4 != 0){
            // If the number is not divisible by 4, add it to sum and print
            cout << i;
            sum += i;
        }
        else {
            // Print 0 when number is divisible by 4
            cout << "0";
        }
        if (i != maxValue){
            // This check is added to not print the last '+'
            cout << " + ";
        }
        i++;
    }
    cout << endl;
    cout << "Result of the series is " << sum << endl;
}


void printSeriesSkipFour(int n){
    int sum = 0;
    for(int i = 1; i <= n; i++){
        if (i%4 != 0){
            // If the number is not divisible by 4, add it to sum and print
            cout << i << "+";
            sum += i;
        }
        else{
            cout << "0 +";
        }
    }
    cout << endl;
    cout << "Result of the series is " << sum << endl;
}

#include <stdio.h>
#include <ctype.h>

int CountUpper(string userInput) {
    int upperCount = 0;
    for (int i = 0; i < userInput.size(); i++) {
        if (isupper(userInput[i])) {
            upperCount++;
        }
    }
    if (userInput.empty()) {
        return -1;
    }
    else if (upperCount == 0) {
        return -2;
    }
    return upperCount;
}







int CountUpper(string s){
    int i = 0;
    int upperCount;
    while(userInput[i] != 0){
        if(isupper(i)){
            upperCount++;
            i++;
        } 
    }
if(upperCount == 0){return -2;}
return upperCount;

}


