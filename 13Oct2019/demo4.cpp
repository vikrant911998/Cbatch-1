#include<iostream>
using namespace std;

class A{
    protected:
        int a;
        void show(){
            cout<<"SHow of Class A"<<endl;
        }
};

class B:public A{
    public:
    void display(){
        cout<<"Value of A is "<<a<<endl;
        show();
    }
};

int main(){
    B obj;
    obj.display();
    

    return 0;
}