#include<iostream>
using namespace std;

class Student{
    private:
        int rollno;
        string name;
    public:
        void input(){
            cout<<"Enter the rollno"<<endl;
            cin>>rollno;
            cout<<"Enter the name"<<endl;
            cin>>name;
        }
        void display(){
            cout<<"RollNo: "<<rollno<<endl;
            cout<<"Name : "<<name<<endl;
        }
};

int main(){

    Student s1,s2 ;
    
    s1.input();
    s2.input();

    s1.display();
    s2.display();
    

    return 0;
}