#include<iostream>
using namespace std;
int main(){
    int n; cout<<"enter the row "; cin>>n;
    int m=n-1;
    for(int i=1;i<=2*n-1;i++ ){
        cout<<i;
    }
    cout<<endl;
    int count=1;
    for(int i=1;i<=m;i++){
        int count=1;
        for(int j=1;j<=m+1-i;j++){
            cout<<count;
            count++;
        }
        for(int k=1;k<=2*i-1;k++){
            cout<<" ";
            count++;
        }
        for(int j=1;j<=m+1-i;j++){
            cout<<count;
            count++;
        }        
        cout<<endl;
    }
    return 0;
}