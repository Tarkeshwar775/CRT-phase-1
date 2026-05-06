#include <iostream>
using namespace std;

void setTemp(int temp = 22)
{
    cout << "Temperature set to " << temp << "C" << "\n";
    
}
void setTemp(double temp)
{
    cout << "Temperature set to " << temp << "C" << "\n";
}
void setTemp(string mode)
{
    if (mode == "ECO")
    {
        cout << "Temperature set to " << 24 << "C" << "\n";
    }
    else if (mode == "TURBO")
    {
        cout << "Temperature set to " << 18 << "C" << "\n";
    }
}

int main()
{
    setTemp();
    setTemp(20);
    setTemp("ECO");
    setTemp("TURBO");
}
