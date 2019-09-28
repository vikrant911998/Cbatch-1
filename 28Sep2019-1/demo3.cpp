#include<iostream>
using namespace std;

// 0->[1(0),2(1)]
// 1->[1(0),2(1)]
// 2->[1(0),2(1)]



int main(){
    int a[2][2];
    
    cout<<"Enter the elements of the 2 D array"<<endl;
    for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            cin>>a[i][j];
        }
    }

    for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            cout<<a[i][j]<<"  ";
        }
        cout<<endl;
    }


    return 0;
}