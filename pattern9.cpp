#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of the odd row: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==n/2+1 || i==n/2+1) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}