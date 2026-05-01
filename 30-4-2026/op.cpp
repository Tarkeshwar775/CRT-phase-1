#include<iostream>
using namespace std;

int main() {
    int side1, side2, side3;
    cin >> side1 >> side2 >> side3;
    
    bool isEqui = (side1 > 0) && (side1 == side2) && (side2 == side3);
    cout << isEqui << endl;
    return 0;
    
}
