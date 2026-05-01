#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;
    
    if(age >= 18) {
        if (age >= 100) {
            cout <<"Eligible for Vote (But we are Super senior citizen";
        } else {
            cout <<"Eligible for Vote";
        }
    } else {
        if(age < 0) {
            cout << "Enter a Valid Age number";
        } else {
            cout << "Not Eligible for Vote";
        }
    }
    return 0;
}
