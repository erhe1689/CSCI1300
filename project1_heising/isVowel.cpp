//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Project 1 - Problem 2
#include <iostream>
#include <string>
using namespace std;

bool isVowel(char userValue){
    bool ifVowel;
    if(userValue == 'a' || userValue == 'e' || userValue == 'i' || userValue =='o' || userValue == 'u' || userValue == 'A' || userValue == 'E' || userValue == 'I' || userValue == 'O' ||userValue == 'U'){
        ifVowel = true;
    }
    else ifVowel = false;
    return ifVowel;
}

int main(){
    char userValue;
    cout << "Enter a character: "<< endl;
    cin >> userValue;
    cout << isVowel(userValue) << endl;
    return 0;
}
