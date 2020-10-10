//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Project 1 - Problem 4
#include <iostream>
#include <string>
using namespace std;

double calcSimScore(string sequence1, string sequence2){
    double similarityScore;
    int hammingDistance = 0;

    if(sequence1.length() != sequence2.length()|| sequence1 == "" || sequence2 == ""){
        similarityScore = 0.0;
    }
    else{
        for(int i = 0; i < sequence1.length(); i++){
            if(sequence1[i] != sequence2[i]){
                hammingDistance++;
            }
        }
        similarityScore = (sequence1.length() - hammingDistance) / (double)sequence1.length();

    }
    return similarityScore;
}

int main(){
    string sequence1;
    string sequence2;
    
    cout << "Enter first sequence: " << endl;
    cin >> sequence1;
    cout << "Enter second sequence: " << endl;
    cin >> sequence2;
    cout << calcSimScore(sequence1,sequence2);
    return 0;

}
