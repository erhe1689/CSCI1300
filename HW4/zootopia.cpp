//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 4 - Problem 3
#include <iostream>
using namespace std;

int mode;
float hireScore = 0.0;
float agility = 0.0;
float strength = 0.0; 
float speed = 0.0;

int main(){
    while(true){
    cout << "Select a numerical option:\n=== menu === \n1. Fox\n2. Bunny\n3. Sloth\n4. Quit " << endl;
    cin >> mode;

    switch(mode){
        case 1:{
            cout << "Enter agility: " << endl;
            cin >> agility;
            cout << "Enter strength: "<< endl;
            cin >> strength;
            hireScore = (1.8 * agility) + (2.16 * strength);
            cout << "Hire Score: " << hireScore << endl;

            break;}
        case 2:{
            cout << "Enter agility: " << endl;
            cin >> agility;
            cout << "Enter speed: "<< endl;
            cin >> speed;
            hireScore = (1.8 * agility)+ (3.24 * speed);
            cout << "Hire Score: " << hireScore << endl;
            break;}
        case 3:{
            cout << "Enter strength: " << endl;
            cin >> strength;
            cout << "Enter speed: "<< endl;
            cin >> speed;
            hireScore =(2.16 * strength) + (3.24 * speed);
            cout << "Hire Score: " << hireScore << endl;
            break;
            }
        case 4:{
            cout << "Good bye!" << endl;
            return 0;
        }
        default:{
            cout << "Invalid option"<<endl;
            break;}
    }
    
}}