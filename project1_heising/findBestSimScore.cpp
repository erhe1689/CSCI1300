//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Project 1 - Problem 5
#include <iostream>
#include <string>
#include <cmath>
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

double findBestSimScore(string genome, string subSequence){
    double highestSimScore = 0.0;
    double storedCalcSimScore = 0.0;
    //error invalidation, checks that sub length is less than full length, and that both are not empty
    if(genome.length() < subSequence.length() || genome ==  "" || subSequence == ""){
        return 0;
    }
    else {
        // shuffles through the genome, comparing the subsequence with different starting points
        for(int i = 0; i <= (genome.length() - subSequence.length()); i++){
            storedCalcSimScore = calcSimScore(genome.substr(i,subSequence.length()), subSequence);
            highestSimScore = fmax(highestSimScore,storedCalcSimScore);//finds which genome has the max score
        }
        return highestSimScore;//returns the best sim score
    }
}

int main(){
    string genome;
    string subSequence;
    cout << "Enter a genome" << endl;
    cin >> genome;
    cout << "Enter a checking sequence: " << endl;
    cin >> subSequence;
    cout << findBestSimScore(genome, subSequence);
    return 0;
}