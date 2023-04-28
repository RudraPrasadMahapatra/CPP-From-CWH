#include<iostream>
using namespace std;
/*
class templates with multiple parameters (one,two or more than two)
template<class T1, class T2....(comma separated)>
class nameOfclass{
    //Body
};
*/
template<class T1, class T2>
class myClass {
    public: 
        T1 data1;
        T2 data2;
        myClass(T1 a , T2 b){
            data1 = a;
            data2 = b;
        }
        void display(){
            cout<<this->data1<<endl<<this->data2<<endl;
    }
};
int main(){
    // myClass<int, char> obj(1 , 'c');
    myClass<int, float> obj(1 , 4.44);
    obj.display();
return 0;
}