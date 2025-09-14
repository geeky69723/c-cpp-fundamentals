#include<iostream>
using namespace std;
int main(){
    // int i=7;
    // int *ptr=&i;
    // cout<<ptr<<endl;
    // ptr+=1;
    // cout<<ptr;
    int a=15;
    int *ptr=&a;
    int b=++*(ptr);
    cout<<a<<" "<<b;

}