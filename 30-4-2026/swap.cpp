#include<iostream>
using namespace std;

int main() {
    int a;
    int b;
    
    cin >> a >> b;
    // swapping Logic
    int temp = a;
    a = b;
    b = temp;
    
    cout << a << "\n" << b << endl;
    return 0;
}
