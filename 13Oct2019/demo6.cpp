#include<iostream>
using namespace std;

class Student{
    string name;

    public:
        void setName(){
            cout<<"Enter a name"<<endl;
            cin>>this->name;
        }
        void getName(){
            cout<<"Name : "<<this->name<<endl;
        }
};

int main(){
    
    Student arr[5];

    for(int i=0;i<5;i++){
        Student s1;
        s1.setName();
        arr[i] = s1;
    }

    for(int i=0;i<5;i++){
        arr[i].getName();
    }

    return 0;
}