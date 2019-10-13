#include<iostream>
using namespace std;

class Student{
    private:
        int rollno;
        string name;
        string address;
    public :

        Student(int rollno,string name,string address){
            
            this->rollno = rollno;
            this->name = name;
            this->address = address;

        }
        void input(){
            cout<<"Enter the roll no"<<endl;
            cin>>rollno;
            cout<<"Enter the name "<<endl;
            cin>>name;
        }

        void display(){
            cout<<"Name : "<<this->name<<endl;
            cout<<"Roll No : "<<this->rollno<<endl;
            cout<<"Address : "<<this->address<<endl;
        }
};

int main(){
    Student s1(101,"vikrant","rohini");
    // s1.input();
    s1.display();
    
    return 0;
}