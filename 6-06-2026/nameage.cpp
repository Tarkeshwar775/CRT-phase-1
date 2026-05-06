#include <iostream>
using namespace std;

class student
{
    public:
        string name;
        int age;
        
void introduce()
{
    cout << "Hi there, this person name is " << name << " and his name is "<< age << "\n";
}
};

int main() 
{
    student s1,s2;
    s1.name = "Tarkeshwar";
    s1.age = 21;
    s2.name = "Rahul";
    s2.age = 19;
    s1.introduce();
    s2.introduce();
}
