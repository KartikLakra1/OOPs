#include <iostream>
using namespace std;

class person // abstract class
{
public:
    virtual void give() = 0;
};
class boy : public person
{
public:
    void give()
    {
        cout << "Brown Bun \n";
    }
};
class girl : public person
{
public:
    void give()
    {
        cout << "pink Bun \n";
    }
};

int main()
{
    person *ptr;
    ptr = NULL;
    girl g;
    boy b;
    ptr = &g;
    ptr->give();

    ptr = &b;
    ptr->give();
    return 0;
}