#include<iostream>
using namespace std;
void tri( int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    tri(3);
    tri(4);
    tri(5);
}