#include <iostream>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;

    void area()
    {
        cout << "area of rectangle : " << length * breadth << endl;
    }
};

class cuboid : public rectangle
{
public:
    int height;

    void volume()
    {
        cout << "volume of cuboid is : " << length * breadth * height << endl;
    }
};

int main()
{
    cuboid c;
    c.length = 10;
    c.breadth = 6;
    c.height = 6;
    c.area();
    c.volume();
    return 0;
}