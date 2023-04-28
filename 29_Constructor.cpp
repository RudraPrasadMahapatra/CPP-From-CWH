#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // <----Creating a constructor---->
    // constcuctor is a special member function with the same name as of the class.
    // It is used to initializ the objects of its class
    // it is automically invoked whenever an object is created

    Complex(void); // constructor declaration

    void printnumber()
    {
        cout << "Your number is :" << a << " + " << b << " i " << endl;
    }
};

Complex ::Complex() // this is a default constructure as it accepts no parameters
{
    a = 0;
    b = 0;
    // cout << "Hello World" << endl;
}
int main()
{
    Complex c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}
/*
<-- characteristics of constructuors -->
1.it should be declared in the public section of the class
2.they are automatically invoked whenever the object is created
3.They cannot return values an d do not have return types
4.It can have default arguments
5.We cannot refer to the adderss
*/