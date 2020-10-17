//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Project 1 - Problem 3
#include <iostream>
#include <string>
using namespace std;
string userInput;
//same as the other function, loops through and compares user char to vowel chars
bool isVowel(char userValue){
    bool ifVowel;
    if(userValue == 'a' || userValue == 'e' || userValue == 'i' || userValue =='o' || userValue == 'u' || userValue == 'A' || userValue == 'E' || userValue == 'I' || userValue == 'O' ||userValue == 'U'){
        ifVowel = true;
    }
    else ifVowel = false;
    return ifVowel; //returns a T or F to vowel or not
}

int numVowels(string userInput){
    int vowelCount = 0;
    for(int i = 0; i < userInput.length(); i++){
        if(isVowel(userInput[i])){ // runs the isvowel function on each char till the end of loop. Each True value adds to the vowelcount which is then printed. 
            vowelCount++;
        }
    }
    return vowelCount;
}


int main(){

    //user test case; get userinput, run function on user input
    getline(cin,userInput);
    cout << numVowels(userInput) << endl;
    return 0;

}