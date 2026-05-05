#include <iostream>
using namespace std;


int area (int a, int  b)
{
    return a*b;
}

int main()
    {
        int length = 10;
        int width = 20;
        int areaOfRectangle = area(length, width);
        
        cout << areaOfRectangle;
    }
