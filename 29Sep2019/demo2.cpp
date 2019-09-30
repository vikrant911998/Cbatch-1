#include<iostream>
using namespace std;

class A{
    private:
    // data, member variables, instance variables
    int a;
    char c;

    public:
    //Default Constructor -->no Arguments
    A(){
        a = 23;
        c = 'C';
        cout<<"Default Constructor Called"<<endl;
    }


    //behaviour , methods, member functions
    void show(){
        cout<<"Value of A :"<<a<<endl;
        cout<<"Value of C :"<<c<<endl;
    }
};


int main(){
    //class instances
    A obj1;//a,c
    // A obj2;//a,c
    obj1.show();

    return 0;
}






//class definition
// class class_name{

// };