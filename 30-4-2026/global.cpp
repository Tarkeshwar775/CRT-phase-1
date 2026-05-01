#include<iostream>
using namespace std;
// global variable
int globalVaribale = 100;
int main(){
    // local variable
    int userInput;
    float result;
    
    cin >> userInput;
    result = (double)globalVaribale / userInput;
    
    cout << result << endl;
    return 0;
    
}
