#include <iostream>
using namespace std;

int billing(int a)
{
    return a * 30;
}

int main()
{
    int coffee = 3;
    cout << billing(coffee);
}
