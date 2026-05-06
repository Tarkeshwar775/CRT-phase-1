#include <iostream>
using namespace std;

void swapNumber(int* x,int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a;
    int b;
    cin >> a;
    cin >> b;
    swapNumber(&a, &b);
    cout << a << " " <<b;

}
