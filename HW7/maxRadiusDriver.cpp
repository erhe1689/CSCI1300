//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 7 - Problem 2 

//implementing the planet class
#include "Planet.h"
#include <string>
#include <cmath>
#include <iostream>
using namespace std;

int maxRadius(Planet planets[], int numPlanets){
    double maxRadius = -1.0;
    int maxIndex = -1; // returns -1 if there is an empty array
    for(int i = 0; i < numPlanets; i++){
        if(planets[i].getRadius() > maxRadius){
            maxRadius = planets[i].getRadius();
            maxIndex = i;
        }
    }
    return maxIndex;

}


int main(){
    Planet planets[5];
    planets[0] = Planet("On A Cob Planet",1234);
    planets[1] = Planet("Bird World",4321);
    int index = maxRadius(planets, 2);
    cout << planets[index].getName() << endl;
    cout << planets[index].getRadius() << endl;
    cout << planets[index].getVolume() << endl;

    Planet planets1[3];
    planets1[0] = Planet("Nebraska",13.3);
    planets1[1] = Planet("Flarbellon-7",8.6);
    planets1[2] = Planet("Parblesnops",6.8);
    index = maxRadius(planets1, 3);
    cout << planets1[index].getName() << endl;
    cout << planets1[index].getRadius() << endl;
    cout << planets1[index].getVolume() << endl;

    Planet planets2[3];
    index = maxRadius(planets2, 0);
    cout << index << endl;

    Planet planets3[3];
    planets3[0] = Planet("Planet Squanch",6.8);
    planets3[1] = Planet("Delphi 6",8.6);
    Planet newPlanet;
    newPlanet.setName("Cronenberg World");
    newPlanet.setRadius(8.6);
    planets3[2] = newPlanet;
    index = maxRadius(planets3, 3);
    cout << planets3[index].getName() << endl;
    cout << planets3[index].getRadius() << endl;
    cout << planets3[index].getVolume() << endl;
}