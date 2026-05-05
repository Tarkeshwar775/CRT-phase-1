#include <iostream>
using namespace std;

int currencyConversion(int amountinUSD)
{
    return amountinUSD /100;
}

int main()
{
    cout << currencyConversion(1000);
    return 0;
}
