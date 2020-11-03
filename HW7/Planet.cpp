//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 7 - Problem 1 

//implementing the planet class
#include "Planet.h"
#include <string>
#include <cmath>
using namespace std;

//default constructor
Planet::Planet(){
    planetName = "";
    planetRadius = 0.0;
}

//Parameterized constructor
Planet::Planet(string name, double radius){
    planetName = name;
    planetRadius = radius;
}
//name getting function, returns planetName
string Planet::getName() const{
    return planetName;
}
//name setting function, sets name to string s 
void Planet::setName(string s){
    planetName = s;
    return;
}
//radius getting function, returns radius
double Planet::getRadius(){
    return planetRadius;
}
//radius setter function, sets radius to usernum
void Planet::setRadius(double userNum){
    planetRadius = userNum;
    return;
}
//volume getter function, calculates planet volume based on planetRadius
double Planet::getVolume(){
    double volume = (4/3.0) * M_PI * pow(planetRadius,3);
    return volume;
}


