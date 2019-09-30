#include<iostream>
using namespace std;

class Area{
    private:
        int l;
        int b;
        
    public:
        //Default Constructor
        Area(){
            l = 5;
            b = 5;
            cout<<"Default"<<endl;
        }
        //Parameterised Constructor
        Area(int a){
            l = a;
            b = a;
            cout<<"Parameter -1"<<endl;
        }
        Area(int a, int c){
            l = a;
            b = c;
            cout<<"Parameter- 2"<<endl;
        }

        void calc(){
            cout<<"Area : "<<l*b<<endl;
        }
};




int main(){
    Area obj1, obj2(2), obj3(3,4);
    obj1.calc();
    obj2.calc();
    obj3.calc();

    return 0;
}