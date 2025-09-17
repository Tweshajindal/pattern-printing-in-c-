#include<iostream>
using namespace std;
int main(){
    //rectangle banana h
    //rows - m, cols - 5
    int m;
    cout<<"enter no of rows : ";
    cin>>m;
    int n;
    cout<<"enter no of columns : ";
    cin>>n;
    for(int i=1;i<=m;i++){  // rows=m
        for(int j=1;j<=n;j++){  //cols = n
           cout<<"* ";
        }
        cout<<endl;
    }
}