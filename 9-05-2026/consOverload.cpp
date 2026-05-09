#include <iostream>
using namespace std;

class rectangle
{
    public:
        int length;
        int breadth;
        
    rectangle()
    {
        length =1;
        breadth =1;
    }
    rectangle(int side)
    {
        length = side;
        breadth = side;
    }
    rectangle(int side1,int side2)
    {
        length = side1;
        breadth = side2;
    }
    void area()
    {
        cout << length * breadth <<"\n";
    }
};

int main()
{
    rectangle r1;
    rectangle r2(45);
    rectangle r3(78,52);
    
    r1.area();
    r2.area();
    r3.area();
}
