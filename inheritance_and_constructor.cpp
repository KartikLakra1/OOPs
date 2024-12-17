#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "default constructor of base class" << endl;
    }
    base(int b)
    {
        cout << "Parametrized constructor of base class " << b << endl;
    }
};

class derived : public base
{
public:
    derived()
    {
        cout << "default constructor of derived class" << endl;
    }
    derived(int d)
    {
        cout << "parametrized constructor of derived class " << d << endl;
    }
};

int main()
{
    derived();
    derived(10);
    return 0;
}