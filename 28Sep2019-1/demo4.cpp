#include<iostream>
using namespace std;

int main(){
    int a[2][2];
    int b[2][2];
    int c[2][2];
    int sum;
    
    cout<<"Enter the elements of the first array"<<endl;
    for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            cin>>a[i][j];
        }
    }

    cout<<"Enter the elements of the second array"<<endl;
    for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            cin>>b[i][j];
        }
    }

    for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){
            sum=0;
            for(int k=0;k<2;k++){
                sum = sum + a[i][k]*b[k][j];
            }
            c[i][j]  =sum;
            
        }
        
    }

    for(int i=0;i<2;i++){

        for(int j=0;j<2;j++){

            cout<<c[i][j];
        }
    }

    return 0;
}