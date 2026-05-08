#include <iostream>
using namespace std;

class parent
{
    public:
        void add(int a,int b)
            {
                int add = a+b;
                cout << add << "\n";
            }
        void add(int a,int b,int c)
        {
            int add = a+b+c;
            cout << add << "\n";
        }
        void add(double a,double b)
        {
            double add = a+b;
            cout << add << "\n";
        }
};

int main()
{
    parent obj1;
    obj1.add(25,8);
    obj1.add(25,85,24);
    obj1.add(21.5,54.6);
}


        
