#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    int r=0;
    for(int i=1;0<n;i++){
        int temp=n%10;
        r=r*10+temp;
        n/=10;
    }
    cout<<r;
}