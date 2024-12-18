#include <iostream>
using namespace std;

class Alpha
{
private:
    int a;
    int b;

public:
    Alpha()
    {
        a = 5;
        b = 5;
        stat++;
    }

    static int stat;
};
int Alpha::stat = 0;

int main()
{
    Alpha a1;
    Alpha a2;
    cout << a1.stat << endl;
    cout << a2.stat << endl;

    return 0;
}