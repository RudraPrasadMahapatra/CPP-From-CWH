#include<iostream>
using namespace std;
class Base{
    protected://
    int a;
    private:
    int b;
};
/*For a protected member :
-----------------------------------------------------------------------------------------|
    |                   | public derivation |  private derivation |  protected derivation|
    |                   |----------------------------------------------------------------|
    |1.private members  | not Interited     |  not Interited      |     not Interited    |
    |-------------------|----------------------------------------------------------------|
    |2.protected members|   protected       |     private         |       protected      |
    |-------------------|----------------------------------------------------------------|
    |3.public members   |   public          |     private         |       protected      |
    |-------------------|----------------------------------------------------------------|


*/
class derived : protected Base{

};

int main(){
 Base b;
 derived d;
//  cout<<b.a;//
return 0;
}