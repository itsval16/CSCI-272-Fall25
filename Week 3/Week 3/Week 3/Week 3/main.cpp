#include <iostream> // standard libary

using namespace std;

template <typename T>
T maxNum (T a, T b){
    return (a > b) ? a : b ; //a +b-c;
}

//example 1
//int main() {
   // int intMax = maxNum(5, 10);
    //double doubleMax = maxNum(2.5, 11.6);
//}

//example 2
//int main () {
    //int intCalculations = mathFunctions(20,30, 40);
   // double doubleCalculations = mathFunction(11.11, 22.22, 33.00);
    
   // cout << "integer = " << intCalculations << endl;
   // count << "double = " << doubleCalculations ,, endl;
    
   // return 0;
//}

//example 3: finding the maximum of two values
//int main(){
    //int num1= 5, num2= 10;
   // count << "Max of" << num1 << "and" << num2
//example 4: vector
int main(){
    vector <double> prices = {1,2,3,4,5};
    prices.push_back(10);
    prices.push_back(50);
    prices.push_back(11);
    
    double total = prices[0] + prices [1] + prices[2];
    cout << "Total = $" << total << endl;
    //total 6
}

