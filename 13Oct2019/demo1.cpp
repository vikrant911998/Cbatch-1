#include<iostream>
using namespace std;

//Multilevel Inheritance
class A{
    int a;
    public:
        A(){
         this->a = 10;   
        }

        void show(){
            cout<<"Value of  Class A is "<<a<<endl;
        }
};

class B:public A{
    int b;
    public:
        B(){
            this->b = 20;
        }

        void show1(){
            cout<<"Value of Class B is "<<b<<endl;
        }
};

class C:public B{
    int c;
    public:
        C(){
            this->c = 30;
        }

        void show2(){
            cout<<"Value of Class C is "<<c<<endl;
        }
};





int main(){

    C obj ;
    obj.show();
    obj.show1();
    obj.show2();
    return 0;
}