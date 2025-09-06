//Created by Valeria Pavia on 09/03/25
#include <iostream>
using namespace std;

//function to calculate average
double average(int scores[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++){
        sum += scores[i];
    }
    return (double)sum/size; // return average
}
int main(){
    int userInput;
    cout << "Enter the size of the array: " << endl;
    cin >> userInput;
    int scores[5]= {90, 85, 70, 95, 100}; //an array of 5 elememnts
    int sum = 0;
    
    for (int i = 0; i < 5; i++){
        sum += scores[i];
    }
    cout << "Average = " << sum / 5 << endl;
        
    return 0;
    }

