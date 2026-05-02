#include <iostream>
using namespace std;

int main()
{
    int n;
    int fac =1;
    cout<< "Enter a number";
    cin >> n;
    for (int i=n;i>=1;i--)
    {
         fac = fac*i;
    }
    cout << fac;
    return 0;
}
