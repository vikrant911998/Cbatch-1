#include<iostream>
using namespace std;

class A{
    protected:
        int a;
    private:
        int b;
    public:
        A(){
            this->b=10;
        }
        void a1(){
            cout<<"This is A1 function"<<endl;
        }
};

// class B:protected A{
class B:private A{
    public:
        void show(){
            cout<<"value is "<<a<<endl;
            a1();
        } 
};

int main(){
    B obj;
    obj.show();
    // obj.a1();

    return 0;
}