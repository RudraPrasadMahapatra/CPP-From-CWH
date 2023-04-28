#include <iostream>
using namespace std;

template <class T>
class Rudra{
public:
    T data;
    Rudra(T a){
        data = a;
    }
    void display();
};

void func(int a){
    cout<<"I am first func() "<<a<<endl;
}
 
template<class T>
void func(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}
int main()
{
    // Rudra<float> r(5.7);
    // Rudra<char> r('r');
    // Rudra<int> r(54);
    // cout << r.data << endl;
    // r.display();

    // func(4);  //Exact match takes the highest priority
    func1(5);  //Exact match takes the highest priority
    
    return 0;
}
