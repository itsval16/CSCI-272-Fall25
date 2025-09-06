//Created by Valeria Pavia on 09/03/25
#include <iostream>
using namespace std;

int main(){
    int scores [5]= {90,85,70,95,100};
    //an array of 5 elememnts
    int sum = 0;
    
    //loop through the array
    for (int i = 0; i < 5; i++){
        sum+= scores[i];
    }
    cout << "Average = " << sum / 5 << endl;
    return 0;
}

