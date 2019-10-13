#include<iostream>
using namespace std;

//Super Class and Parent Class
class A{
    private:
        int a;
    public:
        A(){
            cout<<"Default constructor of Class A"<<endl;
        }
        A(int s){
            cout<<"Parameter constructor of Class A"<<endl;
        }
        
        ~A(){
            cout<<"Destructor of class A"<<endl;
        }

        void show(){
            cout<<"Show of Class A"<<endl;
        }

};

//Sub Class and Child Class
class B :public A{
    public:
        B():A(45){
            cout<<"Default constructor of Class B"<<endl;
        }
        ~B(){
            cout<<"Destructor of class B"<<endl;
        }
};

int main(){
    B obj;
    // obj.show();
    // obj.a;

    return 0;
}
