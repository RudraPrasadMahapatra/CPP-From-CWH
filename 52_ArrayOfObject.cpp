#include<iostream>
using namespace std;

class shopItem{
    int id;
    float price;
    public:
    void setData(int a,float b){
        id = a;
        price = b;
    }
    void getData(){
        cout<<"Code of this item is :"<<id<<endl;
        cout<<"price of this item is :"<<price<<endl;
    }
};
int main(){
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];
    //1. General store shopItem
    //2. veggies item 
    //3. Hardware store
    int p,i;
    float q;
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;
    for ( i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of General item "<< i +1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }
    for ( i = 0; i < size; i++)
    {
        cout<<"Item number :"<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    





return 0;
}