//pointer to object
#include<iostream>
using namespace std;

class complex{
    int real, imaginary;
    public:
    void getData(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }
    void setData(int a, int b){
        real =a;
        imaginary=b;
    }
};    
int main(){
//     complex c1;
//     complex *ptr = &c1;
    complex *ptr = new complex;
    // c1.setData(1,54);
    // c1.getData();
    // (*ptr).setData(1,54); is exactlly same as
    ptr->setData(1,54);
    // (*ptr).getData();is as good as
        ptr->getData();
    
        //Array of object using pointer
        complex *ptr1 = new complex[4];
        ptr1->setData(1,4);
        ptr1->getData();



return 0;
}