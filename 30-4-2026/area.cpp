#include<iostream>
using namespace std;

int main() {
    int choice;
    cin >> choice;
    
    if(choice == 1){
        double radius;
        cin >> radius;
        cout << 3.14 * radius * radius << endl;
    } else if (choice == 2) {
        double length, width;
        cin >> length >> width;
        cout << length * width<< endl;
    } else if (choice == 3) {
        double base, height;
        cin >> base >> height;
        cout << 0.5 * base * height << endl;
    } else {
        cout << "invalid Choice" << endl;
    }
    return 0;
    
}
