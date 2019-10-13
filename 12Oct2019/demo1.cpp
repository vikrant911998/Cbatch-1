#include<iostream>
using namespace std;

class A{
    private:
        int a; 
        
    public:
        static int s;

        void show(){
            // cout<<"Static variable "<<s<<endl;
            cout<<"Show of Class A"<<endl;
        }

        static void display(){
            cout<<"Value of S = "<<s<<endl;
        }

};

int A::s = 45;

int main(){

    A obj;
    obj.show();
    cout<<"Static variable "<<A::s<<endl;
    A::display();
    return 0;
}