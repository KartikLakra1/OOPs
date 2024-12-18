#include <iostream>
using namespace std;

class base
{
public:
    ~base()
    {
        cout << "base class destroyed \n";
    }
};

class base2
{
public:
    virtual ~base2()
    {
        cout << "base2 class destroyed \n";
    }
};

class derived : public base, public base2
{
public:
    ~derived()
    {
        cout << "derived class destroyed \n";
    }
};

int main()
{
    base *ptr = new derived;
    base2 *ptr2 = new derived;
    cout << "before --------- \n";
    delete ptr;
    cout << "after ---------- \n";
    delete ptr2;

    return 0;
}