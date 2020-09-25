#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
//No need to include the above preprocessor directives.
//Please add the main() function only

int main(){
    double dealerScore, playerScore, bet, payout;
    cout << "Enter the dealer score: " << endl;
    cin >> dealerScore;
    cout << "Enter the player score: " << endl;
    cin >> playerScore;
    cout << "Enter the value of the bet: " << endl;
    cin << bet;

    if (playerScore <= dealerScore){
        payout = 0;
    }
    else {
        payout = ((playerScore - dealerScore) * bet) / 2;

    }
    cout << "The amount paid out is: " << payout << endl;
    return 0;
}