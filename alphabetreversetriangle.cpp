#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side of triangle : ";
    cin>>n;
    for(int i=1;i<=n;i++){ //rows
        for(int j=1;j<=n-i+1;j++){  //space
            cout<<"  ";
        }
        for(int j=1;j<=i;j++){   //stars
            cout<<(char)(j+64)<<" ";
        }
        cout<<endl;
    }
}