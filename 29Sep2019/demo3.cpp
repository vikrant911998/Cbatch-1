#include<iostream>
using namespace std;

class Account{
    private://Access Specifiers
        int accountno;
        void show(){
            cout<<"Private Show Function"<<endl;
            cout<<"Account Number : "<<accountno<<endl;
        }


    public://Access Specifiers
        Account(){
            cout<<"Account Class Default Constructor Called"<<endl;
        }
        void input(){
            cout<<"Enter the account Number"<<endl;
            cin>>accountno;
            // show();
        }

        int getAccountNo(){
            return accountno;
        }
};

int main(){
    Account obj1;
    obj1.input();
    // obj1.show(); -> Show is a private function
    int acc = obj1.getAccountNo();
    cout<<"Account Number : "<<acc<<endl;

    return 0;
}