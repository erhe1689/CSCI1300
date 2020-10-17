//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Project 1 - Problem 2
#include <iostream>
#include <string>
using namespace std;

bool isVowel(char userValue){
    bool ifVowel; //declares new 'switching variable' 
    // checks user input char with vowel chars and returns either T or F
    if(userValue == 'a' || userValue == 'e' || userValue == 'i' || userValue =='o' || userValue == 'u' || userValue == 'A' || userValue == 'E' || userValue == 'I' || userValue == 'O' ||userValue == 'U'){
        ifVowel = true;
    }
    else ifVowel = false;
    return ifVowel; //returns answer from function
}

int main(){
    //test case that gets user input, then returns a 1 if vowel and a 0 if not. 
    char userValue;
    cout << "Enter a character: "<< endl;
    cin >> userValue;
    cout << isVowel(userValue) << endl;
    return 0;
}
