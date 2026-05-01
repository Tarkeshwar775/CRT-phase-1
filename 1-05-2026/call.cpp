#include <iostream>
using namespace std;

int main(){
    int choice;
    cin >> choice;
    
    switch(choice) {
        case 1: 
        cout <<" Transferring call to the customer support...";
        break;
        case 2:
        cout << "Transferring call to billing and accounts...";
         break;
        case 3:
        cout << "Connecting to Technical help desk...";
         break;
        case 4:
        cout << "Connecting call to the agent...";
         break;
        default:
        cout << " Invalid selection, Enter a valid number...";
        
    }
    return 0;
}
