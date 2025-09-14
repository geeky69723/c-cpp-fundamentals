#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of row";
    cin>>n;
    for(int i=0;i<=n;i++){
        int pre=1;
        for(int j=0;j<=i;j++){
        cout<<pre<<" ";
        pre=pre*(i-j)/(j+1);
        }
        cout<<endl;
    }
}