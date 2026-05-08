#include <iostream>
using namespace std;

class parent
{
    public:
        void sum(int a,int b)
        {
            cout << a + b;
        }
};

class child : public parent
{
    public:
        void sum(int a,int b)
        {
            cout << a + b << "child";
        }
};

int main()
{
    child c;
    c.sum(20,30);
}
