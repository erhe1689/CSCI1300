//CSCI1300 Fall 2020
//Author: Eric Heising
//Recitation: 507-Chakraborty
//Homework 3 - Problem 6
#include <iostream>
#include <iomanip>
using namespace std;
int personalized;

int main(){
    cout << "How personalized should the ad be? (1-3)" << endl;
    cin >> personalized;
    switch(personalized){
        case 1:{
            cout << "Do you own a dog?" << endl;
            string dog;
            cin >> dog;
            if(dog == "Yes" || dog == "yes"){
                cout << "Meat's the need of dogs like yours!" << endl;
            }
            else{
                cout << "Dirty mouth? Clean it up with new Orbit Rasberry Mint."<< endl;
            }
            break;
        }
        case 2:{
            cout << "How many Facebook friends do you have?"<< endl;
            int facebookFriends;
            cin >> facebookFriends;
            if(facebookFriends >= 500){
                cout << "Don’t like cleaning up after your dog? Call Doody Free to signup for backyard cleanup or dog walking service." << endl;
            }
            else{
                cout << "Who doesn’t need another cat? Adopt a shelter pet right meow."<< endl;     
            }
            break;
        }
        case 3:{
            int zipcode;
            int age;
            cout << "What is your zip code?"<< endl;
            cin >> zipcode;
            cout << "What is your age?" << endl;
            cin >> age;
            if(zipcode >=  80301 && zipcode <= 80310 && age >= 25){
                cout << "You are surrounded by professional athletes. Up your exercise game in the privacy of your home with a Peloton bike." << endl;
            }
            else if(zipcode >=  80301 && zipcode <= 80310){
                cout << "Looking for dinner that won’t break the bank? Tacos. Come grab a $3 at Centro Latin Kitchen." << endl;
        
            }
            else{
                cout << "Feeling Uninspired? The Boulder Flatirons are calling. Come hike to inspiring views, delicious food, and enjoy the hospitality of Boulder, CO." << endl;
            }
            break;
        }
        default:{
            cout << "Invalid option." << endl;
            return 0;
        }
    }
    return 0;
}