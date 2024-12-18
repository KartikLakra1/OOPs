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
    ~Alpha()
    {
        stat--;
    }

    static int stat;
};
int Alpha::stat = 0;

int main()
{
    Alpha a1;
    Alpha a2;
    Alpha *a3 = new Alpha;
    cout << "BEFORE \n";
    cout << a1.stat << endl;
    cout << a2.stat << endl;
    cout << Alpha::stat << endl;
    cout << "AFTER deleting a3 \n";
    delete a3;
    cout << a1.stat << endl;
    cout << a2.stat << endl;
    cout << Alpha::stat << endl;

    return 0;
}