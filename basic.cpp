#include <iostream>
#include <string>
using namespace std;

class Person
{
    string name;
    int age;
    float height;

public:
    Person() // default constructor
    {
        name = "Null";
        age = 22;
        height = 186.36f;
    }
    Person(string name, int age, float height) // parametrized costructor
    {
        this->name = name;
        this->age = age;
        this->height = height;
    }
    Person(Person &obj1)
    {
        name = obj1.name + " lakra";
        age = obj1.age;
        height = obj1.height;
    }

    void getData()
    {
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
        cout << "Height :" << height << endl;
    }
};

class home
{
    int length, breadth; // member variables

public:
    void setData(int x, int y) // member functions
    {
        length = x;
        breadth = y;
    }
    void area()
    {
        cout << length * breadth;
    }
};

int main()
{
    home h1, h2; // memory allocation
    h1.setData(500, 600);
    h2.setData(7, 1);

    Person P1("Kartik", 23, 200.01);
    Person P3(P1);
    P3.getData();

    return 0;
}