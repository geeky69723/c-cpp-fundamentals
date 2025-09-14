#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}

int combi(int i,int j){
    return factorial(i)/(factorial(j)*factorial(i-j));
}

int main(){
    int n;
    cout<<"enter the number of row";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
           cout<<combi(i,j)<<" ";
        }
        cout<<endl;
    }
}