#include<iostream>
using namespace std;

class Employee{
    int eid;
    string name;

    public :
        void input(){
            cout<<"Enter the Employee id "<<endl;
            cin>>eid;
            cout<<"Enter the name "<<endl;
            cin>>name;
        }

        void display(){
            cout<<"Name : "<<this->name<<endl;
            cout<<"Roll No : "<<this->eid<<endl;
            cout<<endl;
        }
};


int main(){
    Employee e1,e2;
    Employee a[2];

    e1.input();
    a[0] = e1;
    e2.input();
    a[1] = e2;

    for(int i=0;i<2;i++){
        a[i].display();
    }
    


    return 0;
}