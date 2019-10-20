#include<iostream>
using namespace std;

int main(){
    string str = "Hello World";
    cout<<"Length : "<<str.length()<<endl;
    cout<<"Size : "<<str.size()<<endl;
    cout<<"Char At : "<<str.at(4)<<endl;
    cout<<"Char At : "<<str[4]<<endl;
    cout<<"Is Empty : "<<str.empty()<<endl;
    cout<<"Compare : "<<str.compare("fjdslk")<<endl;
    cout<<"Find : "<<str.find('l')<<endl;
    cout<<"Append : "<<str.append(" from the C++")<<endl;
    cout<<"Append : "<<str+" from the C++"<<endl;
    
    // str.clear();
    // cout<<"STRING : "<<str<<endl;
    return 0;
}