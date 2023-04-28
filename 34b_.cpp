#include <iostream>
using namespace std;

class A
{
    int a;
    int b;

public:
    A(int x, int y)
    {
        a = x;
        b = y;
    }
    A(A &ref)
    {
        a = ref.a;
        b = ref.b;
    }
    void show()
    {
        cout << a << " " << b << endl;
    }
};

int main()
{
    A obj(5, 6);
    obj.show();

    A obj2 = obj;
    obj2.show();

    return 0;
}