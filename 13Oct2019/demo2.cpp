#include<iostream>
using namespace std;

class Shape{
    public:
        void print(){
            cout<<"This is a shape"<<endl;
        }
};

class Rectangle:public Shape{
   public:
        void print1(){
            cout<<"This is a Rectangle"<<endl;
        } 
};

class Circle:public Shape{
   public:
        void print1(){
            cout<<"This is a Circle."<<endl;
        } 
};

int main(){
    Circle c1;
    Rectangle r1;
    c1.print1();
    r1.print1();
    return 0;
}