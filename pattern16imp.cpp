#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of row: ";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        for(int k=1;k<=i;k++){
             a-=1;
            cout<<k;           
        }
        cout<<endl;
    }
}