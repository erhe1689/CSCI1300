#include <iostream>
#include <string>
#include <iomanip>
#include <limits>
using namespace std;



void printAbnormalHeartRates(string patients[],int heart_rate[],int numPatients){
    for(int i = 0; i < numPatients;i++){
        if(heart_rate[i]<70||heart_rate[i]>190){
            cout << patients[i] << " " << heart_rate[i] << endl;
        }
    }

}




int maxSum(int data[][10],int rows){
    // maximum from the limits library
    int maximum = INT32_MIN;
    int count = 0;
    // loop through each row of data 1 row at a time, rewriting maximum if a new one is found
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < 10; j++){
             if(data[i][j] >= maximum){
                maximum = data[i][j];
            }
        }
        count += maximum; // summation
        maximum = INT32_MIN; //reset
    }
    return count;
} 

int main(){
    //test case
    int data[2][10] = {
     {1, 2, 3, 4, 5, 10, 9, 8, 7, 6},
     {5, 1, 1, 1, 1, 1, 1, 1, 1, 1} 
     };
    cout << "returned value: " <<  maxSum(data, 2);
}