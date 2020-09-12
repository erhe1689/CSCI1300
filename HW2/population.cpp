//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 2 - Problem 4
#include <iostream>

int births = 8;
int deaths = 12;
int immigrants = 27;
int currentPopulation;
int newPopulation;
using namespace std;

int main(){
    cout << "Enter the current population: " << endl;
    cin >> currentPopulation;
    births =  (60 * 60 * 24 * 365) / 8;
    deaths =  (60 * 60 * 24 * 365) / 12;
    immigrants =  (60 * 60 * 24 * 365) / 27;
    newPopulation = currentPopulation + births + immigrants - deaths;
    cout << "The population in one year: " << newPopulation << endl;
    return 0;
}

    