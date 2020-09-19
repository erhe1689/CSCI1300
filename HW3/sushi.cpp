//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 3 - Problem 3
#include <iostream>
#include <iomanip>
using namespace std;

int sushiEaten;
float discount = 0.0;
float totalPrice;

int main(){
    cout << "Enter the number of sushi: " << endl;
    cin >> sushiEaten;
    if(sushiEaten <= 0) {
        cout << "Invalid input" << endl;
        return 0;
    }
    if(sushiEaten >= 10 && sushiEaten <= 19) discount = .1;
    if(sushiEaten >= 20 && sushiEaten <= 49) discount = .15;
    if(sushiEaten >= 50 && sushiEaten <= 99) discount = .2;
    if(sushiEaten >= 100) discount = .25;
    totalPrice = (sushiEaten * 1.99) * (1 - discount);
    cout << "Total price: $" << setprecision(2) << fixed << totalPrice << endl;
    return 0;


}