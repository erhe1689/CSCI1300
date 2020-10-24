#include <iostream>
#include "Planet.h"
using namespace std;

int main() {
    string name = "Margarita";
    double radius = 50, newRadius = 25;
    Planet planet1 = Planet(name, radius);
    cout << "Planet Name: " << planet1.getName() << endl; 
    cout << "Planet Radius: " << planet1.getRadius() << endl;
    cout << "Planet Volume: " << planet1.getVolume() << endl;
    planet1.setName("Watermelon");
    planet1.setRadius(newRadius);
    cout << "Planet Name: " << planet1.getName() << endl; 
    cout << "Planet Radius: " << planet1.getRadius() << endl;
    cout << "Planet Volume: " << planet1.getVolume() << endl;
}
