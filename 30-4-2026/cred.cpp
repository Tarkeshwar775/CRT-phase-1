#include<iostream>
using namespace std;

int main() {
    const int userId = 1234;
    const int password = 0000;
    
    int inputID, inputPassword;
    cout << "Enter your ID here";
    cin >> inputID;
    cout << "Enter your password here";
    cin >> inputPassword;
    
    bool isGranted =  (userId == inputID) && (password == inputPassword);
    
    cout << "Access Granted" << isGranted << endl;
    cout << "Access Denied" << !isGranted << endl;
    return 0;
}
