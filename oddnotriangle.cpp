#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter side  : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){  //j=2*i-1 and j+=2
            cout<<2*j-1<<" ";   //j
        }
        cout<<endl;
    }
}