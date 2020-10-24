//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 7 - Problem 1 .h file

//Header
#ifndef PLANET_H
#define PLANET_H
#include <string>
#include <cmath>
using namespace std;

class Planet
{
public:
    Planet(); // default constructor
    Planet(string planetName, double planetRadius); // parametrized constructor
    string getName() const; // getter of planet name
    void setName(string userInput); // setter of name
    double getRadius(); // getter of radius
    void setRadius(double userNum); // setter of radius
    double getVolume(); // getter of volume


private:
    string planetName; //private variables
    double planetRadius;


};
#endif