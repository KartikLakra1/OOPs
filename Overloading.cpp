#include <iostream>
using namespace std;

class A
{
    int weight;

public:
    A(int x = 0)
    {
        weight = x;
    }

    void PrintValue()
    {
        cout << "Weight is : " << weight << endl;
    }

    A operator+(A &obj2)
    {
        A temp;
        temp.weight = weight + obj2.weight;
        return temp;
    }

    void operator++()
    { // overloading ++ operator per increment
        ++weight;
    }

    void operator++(int)
    { // overloading ++ operator post increment
        weight++;
    }
};

int main()
{
    A person1(89);
    A person2(99);
    A total;

    total = person1 + person2;
    total.PrintValue();
    ++person1;
    person1.PrintValue();

    return 0;
}