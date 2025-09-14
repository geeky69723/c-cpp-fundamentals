#include<iostream>
using namespace std;
int main(){
    int n,x;
    cout<<"enter base";
    cin>>n;
    int answer=1;  
    cout<<"enter power";
    cin>>x;
    for(int i=1;i<=x;i++){
        answer*=n;
    }
    cout<<answer;
}