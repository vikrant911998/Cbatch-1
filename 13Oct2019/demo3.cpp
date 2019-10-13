#include<iostream>
using namespace std;

class A{
    public:
        void showA(){
            cout<<"This is showA "<<endl;
        }
};

class B{
    public:
        void showB(){
            cout<<"This is showB "<<endl;
        }
};

class C:public A,public B{

};

int main(){ 
    C obj ;
    obj.showA();
    obj.showB();
    return 0;
}