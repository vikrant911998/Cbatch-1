#include<iostream>
using namespace std;

class A{
    private:
        int a;
    public:

        static int s;
        A(){
            a=56;
            cout<<"Default constructor of class A "<<s<<a<<endl;
        }

        ~A(){
            cout<<"Destructor of Class A"<<endl;
        }

        void show(){
            cout<<"Show function of Class A"<<endl;
        }

        static void play(int l){

            cout<<"Play of Class A "<<s<<l<<endl;
        }
};

int A::s = 45;

int main(){
    A obj;
    obj.show();

    cout<<"Static Value is : "<<A::s<<endl;
    A::play(100);
    return 0;
}