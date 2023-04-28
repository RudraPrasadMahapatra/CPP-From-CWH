/*
Create 2 class:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +,_,*,/ and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybrideCalculator and inherit it using these 2 classes :
    Q1. What type of inheritance are you using ?
    ---> multiple inheritance
    Q2. Which mode of inheritance are you using ?
    --->public SimpleCalculator, public ScientificCalculator
    Q3. Create an object of HybridCalculator and display results of simple and scientific calculator.
    Q4. How is code reusability implemented ?
    --->
*/
#include <iostream>
#include <cmath>
using namespace std;

    class SimpleCalculator
    {
        int a, b;

    public:
        void getDataSymple()
        {
            cout << "Enter the value of a" << endl;
            cin >> a;
            cout << "Enter the value of b" << endl;
            cin >> b;
        }
        void performOperationsSymple()
        {
            cout << "The value of a+b is :" << a + b << endl;
            cout << "The value of a-b is :" << a - b << endl;
            cout << "The value of a*b is :" << a * b << endl;
            cout << "The value of a/b is :" << a / b << endl;
        }
    };
    
            class ScientificCalculator
            {
            int a, b;
            public:
                void getDataScientific()
                {
                    cout << "Enter the value of a" << endl;
                    cin >> a;
                    cout << "Enter the value of b" << endl;
                    cin >> b;
                }
                void performOperationsScientific()
                {
                    cout << "The value of cos(a) is :" << cos(a) << endl;
                    cout << "The value of sin(a) is :" << sin(a) << endl;
                    cout << "The value of exp(a) is :" << exp(a) << endl;
                    cout << "The value of tan(a) is :" << tan(a) << endl;
                }
            };

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
};
    int main()
    {
        // SimpleCalculator calc;
        // ScientificCalculator calc;
        // calc.getData();
        // calc.performOperations();
        HybridCalculator calc;
        calc.getDataScientific();
        calc.performOperationsScientific();
        calc.getDataSymple();
        calc.performOperationsSymple();

        return 0;
    }