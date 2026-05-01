#include <iostream>
using namespace std;

int main() {
     string dayOrNight;
     bool motionDetected;
    
     cout << "is it Day or Night? : ";
     cin >> dayOrNight;
     cout << "Is Motion Detected? (1 For Yes, 0 For No): ";
     cin >> motionDetected;
    
     if(dayOrNight == "Night" || dayOrNight == "night"){
         if(motionDetected) {
             cout << "Turn on the LED light with 100% brightness..";
         } else {
             cout << "Turn on the LED light with only 10Percent of brightness..";
         }
     } else {
         cout << "Turn off the Lights...";
     }
     return 0;
}
