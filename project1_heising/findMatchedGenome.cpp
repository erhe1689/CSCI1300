//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Project 1 - Problem 6
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
    if(genome.length() < subSequence.length() || genome ==  "" || subSequence == ""){
        return 0;
    }
    else {
        for(int i = 0; i <= (genome.length() - subSequence.length()); i++){
            storedCalcSimScore = calcSimScore(genome.substr(i,subSequence.length()), subSequence);
            highestSimScore = fmax(highestSimScore,storedCalcSimScore);
        }
        return highestSimScore;
    }
}

void findMatchedGenome(string genome1, string genome2, string genome3, string subSequence){
    if(genome1 == ""|| genome2 == ""||genome3 == ""|| subSequence ==""){
        cout << "Genomes or sequence is empty." << endl;
    }
    else if(genome1.length() != genome2.length() || genome1.length() != genome3.length()){
        cout << "Lengths of genomes are different." << endl;
    }
    else{
        double score1 = findBestSimScore(genome1,subSequence);
        double score2 = findBestSimScore(genome2,subSequence);
        double score3 = findBestSimScore(genome3,subSequence);
        if(score1 >= score2 && score1 >= score3){
            cout <<"Genome 1 is the best match."<< endl;
        }
        if(score2 >= score3 && score2 >= score1){
            cout <<"Genome 2 is the best match."<< endl;
        }
        if(score3 >= score2 && score3 >= score1){
            cout <<"Genome 3 is the best match."<< endl;
            
        }
    }
}

int main(){
    string genome1;
    string genome2;
    string genome3;
    string subSequence;
    cout << "Enter first genome" << endl;
    cin >> genome1;
    cout << "Enter second genome" << endl;
    cin >> genome2;
    cout << "Enter third genome" << endl;
    cin >> genome3;
    cout << "Enter a checking sequence: " << endl;
    cin >> subSequence;
    findMatchedGenome(genome1,genome2, genome3,subSequence);
    return 0;
}