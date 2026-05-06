#include <iostream>
using namespace std;

void updateByValue(int a)
{
    a = 500;
}

void updatebyRefrence(int &a)
{
    a = 500;
}

int main ()
{
    int original = 100;
    cout << original << "\n";
    updateByValue(original);
    cout << original << "\n";
    updatebyRefrence(original);
    cout << original;
}
    
