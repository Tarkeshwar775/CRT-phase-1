#include <iostream>
using namespace std;

class parent1
{
  public:
    void giveMoneyMummy()
    {
        cout << "Mummy paisa do mujhe" << "\n";
    }
};

class parent2
{
    public:
        void giveMoneyPapa()
        {
            cout << "Papa paisa do mujhe" << "\n";
        }
};

class child : public parent1, public parent2
{
};

int main()
{
    child obj1;
    obj1.giveMoneyPapa();
    obj1.giveMoneyMummy();
}
