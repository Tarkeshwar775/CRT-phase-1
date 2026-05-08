#include <iostream>
using namespace std;

class Animal
{
    public:
    virtual void sound()
    {
        cout << "Animal makes sound" << "\n";
    }
};

class dog : public Animal
{
    public:
        void sound() override
        {
            cout << "Dog makes a sound" << "\n";
        }
};

class cat : public Animal
{
    public:
    void sound() override
    {
        cout << "Cat makes a sound" << "\n";
    }
};

int main()
{
    cat obj1;
    dog obj2;
    obj1.sound();
    obj2.sound();
}
