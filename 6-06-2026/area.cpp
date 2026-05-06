#include <iostream>
using namespace std;

int area(int a,int b = 5)
{
    return a * b;
}

int main()
{
    cout << area(10);
}
