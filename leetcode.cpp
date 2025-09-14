#include<iostream>
using namespace std;
int main(){
    int x; 
    cout<<"enter the number: ";
    cin>>x;
    int result=0;
    int q=x;
    while(q!=0){
        int r=q%10;
        result=result*10+r;
        q/=10;
    }
    if(result==x){
        cout<<"enter number is palindrome";
    }
    else{
        cout<<"it is not palindrome";
    }
    return 0;
}