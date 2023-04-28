#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int); // Constructor declaration

    void printnumber()
    {
        cout << "Your number is :" << a << " + " << b << " i " << endl;
    }
};
Complex ::Complex(int x, int y) // This is a parameterized constructure as it accepts two parameters
{

    a = x;
    b = y;
}
int main()
{
    // implict call
    Complex a(4, 5);
    a.printnumber();

    // Explicit call
    Complex b = Complex(5, 3);
    b.printnumber();
    return 0;
}