//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Project 1 - Problem 3
#include <iostream>
#include <string>
using namespace std;
string userInput;

bool isVowel(char userValue){
    bool ifVowel;
    if(userValue == 'a' || userValue == 'e' || userValue == 'i' || userValue =='o' || userValue == 'u' || userValue == 'A' || userValue == 'E' || userValue == 'I' || userValue == 'O' ||userValue == 'U'){
        ifVowel = true;
    }
    else ifVowel = false;
    return ifVowel;
}

int numVowels(string userInput){
    int vowelCount = 0;
    for(int i = 0; i < userInput.length(); i++){
        if(isVowel(userInput[i])){
            vowelCount++;
        }
    }
    return vowelCount;
}


int main(){
    getline(cin,userInput);
    cout << numVowels(userInput) << endl;
    return 0;

}