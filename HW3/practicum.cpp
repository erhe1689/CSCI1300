//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 3 - Problem 1
#include <iostream>
#include <iomanip>
using namespace std;
int score1;
int score2;
int score3;
double practicumAverage = 0.00;

int main(){
    cout << "Enter practicum 1 score:" << endl;
    cin >> score1;
    cout << "Enter practicum 2 score:" << endl;
    cin >> score2;
    cout << "Enter practicum 3 score:" << endl;
    cin >> score3;
    practicumAverage = (score1 + score2 + score3)/3.0;
    //printf( "Practicum average: %.2f\n", practicumAverage);
    cout << "Practicum average: " << setprecision(2) << fixed << practicumAverage << endl;
    if(practicumAverage >= 67.00) cout << "You have a passing practicum average." << endl;
    if(practicumAverage < 67.00) cout << "You can retake practicums during the final." << endl;
    return 0;

}
