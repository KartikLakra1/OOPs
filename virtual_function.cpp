#include <iostream>
using namespace std;

// after adding the virtual keyword to the base class show function the funtion became inaccessible to the base class pointer that points to a derived class object.

class base
{
public:
    virtual void show()
    {
        cout << "base class \n";
    }
};

class derv1 : public base
{
public:
    void show()
    {
        cout << "dervied class 1 \n";
    }
};

class derv2 : public base
{
public:
    void show()
    {
        cout << "dervied class 2 \n";
    }
};

int main()
{
    base *ptr;
    ptr = new derv1();
    ptr->show();

    ptr = new derv2();
    ptr->show();

    return 0;
}