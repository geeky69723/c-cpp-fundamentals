#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    if(n==1 || n==0) cout<<n<<" is neither the prime nor composite";
    bool prime=true;
    for(int i=2;i<=n;i++){
        if(n%i==0) 
        prime=false;
        break;  
    }
    if(prime==true)
    cout<<"enter number is prime";
    else cout<<"enter number is composite";
}