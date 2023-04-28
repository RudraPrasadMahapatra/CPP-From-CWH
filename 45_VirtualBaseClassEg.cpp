#include<iostream>
using namespace std;
/*
    inheritance:-
    student--> test[Done]
    student--> sport[Done]
    test   --> result[Done]
    sport  -->result[Done]
*/
class student{
     protected :    
     int roll_no;
     public:
     void set_no(int a){
        roll_no = a;
     }
     void print_no(void){
        cout<<"Your roll no is "<< roll_no<<endl;
     }
};
class test : virtual public student{
     protected:
     float maths,physics;
     public:
     void set_marks(float m1,float m2){
            maths = m1;
            physics= m2;
     }
     void print_marks(void){
        cout<<"Your result is here :"<<endl 
        <<"maths :"<<maths<<endl
        <<"physics :"<<physics<<endl;
     }
     
};
class sport : virtual public student{
    protected : 
    float score;
    public:
    void set_score(float sc){
        score = sc;
    }
    void print_score(void){
        cout<<"Your PT score is "<<score<<endl;
    }
};

class result : public test, public sport{
    private:
    float total;
    public:
    void display (void){
        total = maths + physics + score ;
        print_no();
        print_marks();
        print_score();
        cout<<" Your total score is :"<<total<<endl;
    }
} ;
int main(){
    result rudra;
    rudra.set_no(143);
    rudra.set_marks(78.9,99.5);
    rudra.set_score(9);
    rudra.display();

return 0;
}