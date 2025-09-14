#include<iostream>
using namespace std;
int main(){
    // int x,y;
    // cin>>x>>y;
    // int *a=&x;
    // int *b=&y;
    // cout<<*a+ *b;
    // return 0;
     
    int x,y;
    int *a=&x;
    int *b=&y;
    cin>>*a>>*b;
    cout<<*a +*b;
    return 0;
}