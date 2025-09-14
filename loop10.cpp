#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the numebr ";
    cin>>n;
    int fibo1=0;
    int fibo2=1;
    int ans=0;
    for(int i=0;i<=n-2;i++){
        ans=fibo1+fibo2;
        fibo1=fibo2;
        fibo2=ans;
    }
    cout<<fibo2;
}