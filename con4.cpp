#include<iostream>
using namespace std;
int main(){
    int a,b;
    char oper;
    cout<<"enter the number,operation and number";
    cin>>a>>oper>>b;
    if(oper=='+') cout<<a+b;
    if(oper=='-') cout<<a-b;
    if(oper=='*') cout<<a*b;
    if(oper=='/') cout<<a/b;

}