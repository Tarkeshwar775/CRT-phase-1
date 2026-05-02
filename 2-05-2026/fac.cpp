#include <iostream>
using namespace std;

int main()
{
    int a= 0;
    int b =1;
    int n,i;
    cout<< "Enter a number";
    cin >> n;
    for (i=0;i <n;i++)
    {
        cout << a << " ";
        int c =a+b;
         a =  b;
         b =  c;
    }
    return 0;

}
