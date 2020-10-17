//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Project 1 - Problem 4
#include <iostream>
#include <string>
using namespace std;

double calcSimScore(string sequence1, string sequence2){
    //declaring necessary variables
    double similarityScore;
    int hammingDistance = 0;

    if(sequence1.length() != sequence2.length()|| sequence1 == "" || sequence2 == ""){//checks for same length, and that both sequences have something in them.
        similarityScore = 0.0;
    }
    else{
        for(int i = 0; i < sequence1.length(); i++){//cycles through sequence1, comparing each char to the same position char in sequence2.
            if(sequence1[i] != sequence2[i]){//if the chars are NOT EQUAL, hamming distance increases by 1.
                hammingDistance++;
            }
        }
        similarityScore = (sequence1.length() - hammingDistance) / (double)sequence1.length(); // calculates simularity score using hamming distance, 

    }
    return similarityScore; // returns similarity score as a double
}

int main(){

    //user input test, takes 2 sequences and runs the calcSimScore function on them, returning similarityScore.
    string sequence1;
    string sequence2;
    
    cout << "Enter first sequence: " << endl;
    cin >> sequence1;
    cout << "Enter second sequence: " << endl;
    cin >> sequence2;
    cout << calcSimScore(sequence1,sequence2);
    return 0;

}
