#include <iostream>
using namespace std;

int main()
{
    int password,guess;
    cout<< "enter the password to be set";
    cin>> password;
    
    do{
        cout<< "password";
        cin>> guess;
    }
    while (password != guess);
    cout << "phone unlocked";
    
    return 0;
}
    
