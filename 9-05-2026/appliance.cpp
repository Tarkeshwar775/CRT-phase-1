#include <iostream>
using namespace std;

class Appliance
{
    public:
        virtual void turnon()
        {
            cout << "Appliance is starting up..." << "\n";
        }
        virtual void work() = 0;
};

class Fan : public Appliance
{
    public:
        void turnon() override
        {
            cout << "Fan blades are moving slowly..." << "\n";
        }
        void work() override
        {
            cout << "Fan is giving me cool air..."<< "\n";
        }
};

class toaster : public Appliance
{
    void work () override
    {
        cout << "Toaster is heating up the breads";
    }
};

int main()
{
    Appliance* kitchenApp;
    Fan myfan;
    kitchenApp = &myfan;
    kitchenApp->turnon();
    kitchenApp->work();
}
