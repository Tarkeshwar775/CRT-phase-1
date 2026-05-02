#include <iostream>
using namespace std;

int main()
{
    int CurrentWater= 0;
    int add;
    int ExcessWater= 0;
    while(CurrentWater < 500)
    {
        cout << "Glass Has" << CurrentWater << "ml How Much To Add";
        cin >> add;
        CurrentWater = CurrentWater + add;
    }
    if (CurrentWater>add)
    {
        ExcessWater= 500-add;
    }
    cout << "Glass Is Full With Water" << CurrentWater << "ml";
}
