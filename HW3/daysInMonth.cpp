//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 3 - Problem 5
#include <iostream>
#include <iomanip>
using namespace std;

int year;
int month;
int days;

int main(){
    cout << "Enter a year: " << endl;
    cin >> year;
    cout << "Enter a month: "<< endl;
    cin >> month;
    switch(month){
        case 1: days = 31; break;
        case 2: {
            if(year > 1582 && (year % 4)== 0 && ((year % 100)!= 0 || (year % 400) ==0)){
                days = 29;
            }
            else days = 28;
            break;
        }
        case 3: days = 31; break;
        case 4: days = 30; break;
        case 5: days = 31; break;
        case 6: days = 30; break;
        case 7: days = 31; break;
        case 8: days = 31; break;
        case 9: days = 30; break;
        case 10: days = 31; break;
        case 11: days = 30; break;
        case 12: days = 31; break;
        default: cout << "Invalid month" << endl; return 0;
    }
    cout << days << " days" << endl;
    return 0;

}