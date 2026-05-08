#include <iostream>
using namespace std;

class vehicle
{
    public:
        void start()
        {
            cout << "vehicle starts" << "\n";
        }
};

class car : public vehicle
{
    public :
    void drive ()
    {
        cout << "car is running" << "\n";
    }
};

class speedometer : public car
{
    public:
        void speed ()
        {
            cout <<"Car is running at 60km/h" <<"\n";
        }
};

int main()
{
    speedometer obj1;
    obj1.speed();
    obj1.drive();
    obj1.start();
}
