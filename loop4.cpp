#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        cout<<a<<endl;
        a*=2;
    }
}