#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int a=0;
    if(n==0) a=0 ;
    else{
        n=abs(n);
        for(int i=0;n>0;i++){
        int digit=n%10;    
        a+=digit;
        n/=10;
        }
    }
    cout<<a;
}