#include<iostream>
using namespace std;

// int fact(int x){
//     int fact=1;
//     for(int i=2;i<=x;i++){
//         fact*=i;
//     }
//     return fact;
// }
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
        cout<<fact<<endl;
    }
    return 0;
}
