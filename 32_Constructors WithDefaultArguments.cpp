#include <iostream>
using namespace std;
class simple
{
    int data1;
    int data2;
    int data3;

public:
    simple(int a, int b = 9, int c = 8) // default argument
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};

void simple ::printData()
{
    cout << "The value of data1 ,data2 and data3 is :" << data1 << " and " << data2 << " and " << data3 << endl;
}

int main()
{
    simple s(12);
    s.printData();
    simple l(12,13);
    l.printData();
    simple m(12,13,14);
    m.printData();
    return 0;
}