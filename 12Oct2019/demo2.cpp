#include<iostream>
using namespace std;

class Rectangle{
    private:
        int l,b; 
        
    public:
        
        Rectangle(){
            cout<<"Default constructor"<<endl;
            l = 0;
            b = 0;
        }

        Rectangle(int l, int b){
            cout<<"Parameter constructor"<<endl;
            this->l = l;
            this->b = b;
        }

        void show(){ 
            cout<<"AREA : "<<l*b<<endl;
        }

};



int main(){
    Rectangle r1,r2(10,2);
    r1.show();
    r2.show();
    
    return 0;
}