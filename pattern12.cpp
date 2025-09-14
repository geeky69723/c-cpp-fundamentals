#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of row; ";
    cin>>n;
    bool one=(int)true;
    for(int i=1;i<=n;i++){
        if(i%2==0) one=false;
        else one=true;
        for(int j=1;j<=i;j++){
            cout<<one;
            one=!one;
        }
        cout<<endl;
    }
}