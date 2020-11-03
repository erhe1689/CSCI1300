#include <iostream>
#include "Planet.h"
using namespace std;

int main() {
    //planet test case
    string name = "Margarita"; 
    double radius = 50, newRadius = 25;
    Planet planet1 = Planet(name, radius);
    //printing info for first planet, testing getters
    cout << "Planet Name: " << planet1.getName() << endl; 
    cout << "Planet Radius: " << planet1.getRadius() << endl;
    cout << "Planet Volume: " << planet1.getVolume() << endl;
    //testing setters changing planets
    planet1.setName("Watermelon");
    planet1.setRadius(newRadius);
    //printing info for new planet
    cout << "Planet Name: " << planet1.getName() << endl; 
    cout << "Planet Radius: " << planet1.getRadius() << endl;
    cout << "Planet Volume: " << planet1.getVolume() << endl;
}
