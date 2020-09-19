//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 3 - Problem 2
#include <iostream>
#include <iomanip>
using namespace std;
float hoursWorked;
float hourlyPayRate;
float overtimeHours = 0.0;
float totalPay;

int main(){
    cout << "Enter the number of hours worked" << endl;
    cin >> hoursWorked;
    cout << "Enter an hourly pay rate" << endl;
    cin >> hourlyPayRate;
    if(hoursWorked < 0 || hourlyPayRate < 0){
        cout << "Invalid input" << endl;
        return 0;
    }

    if(hoursWorked > 40.0){
        overtimeHours = hoursWorked - 40.0;
        hoursWorked = 40.0;
    }
    totalPay = (hourlyPayRate * hoursWorked) + (overtimeHours * (1.5 * hourlyPayRate));
    cout << "Paycheck: " << setprecision(2) << fixed << totalPay << endl;
    return 0;

}