//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 7 - Problem 1 

//implementing the planet class
#include "Planet.h"
#include <string>
#include <cmath>
using namespace std;

Planet::Planet(){
    planetName = "";
    planetRadius = 0.0;
}

Planet::Planet(string name, double radius){
    planetName = name;
    planetRadius = radius;
}

string Planet::getName() const{
    return planetName;
}

void Planet::setName(string s){
    planetName = s;
    return;
}

double Planet::getRadius(){
    return planetRadius;
}

void Planet::setRadius(double userNum){
    planetRadius = userNum;
    return;
}

double Planet::getVolume(){
    double volume = (4/3.0) * M_PI * pow(planetRadius,3);
    return volume;
}


