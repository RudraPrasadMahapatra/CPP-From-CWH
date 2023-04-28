#include <iostream>
using namespace std;

class A
{
    int a;

public:
    // A &setData(int a)
    void setData(int a)
    {
        this->a = a;
        // return *this;
    }
    void getData()
    {
        cout << "The value of a is :" << a << endl;
    };
};
int main()
{
    // this is a keyword which is a pointer to the object which invoks the member function
    A a;
    // a.setData(4).getData();
    a.setData(4);
    a.getData();

    return 0;
}