#include<iostream>
using namespace std;

template<class T1=int , class T2= float, class T3=char>//Default arguments
class Rudra{
    public:
    T1 a; 
    T2 b;
    T3 c;
    Rudra(T1 x , T2 y, T3 z){
        a = x; 
        b = y;
        c = z;
    }
    void display(){
        cout<<"The value of a is :"<<a<<endl;
        cout<<"The value of b is :"<<b<<endl;
        cout<<"The value of c is :"<<c<<endl;
    }

};
int main(){
    Rudra<> r(4, 6.4,'c');
    r.display();
    cout<<endl;
    Rudra<float , char , char> g(4.55, 'o','c');
    g.display();

return 0;
}