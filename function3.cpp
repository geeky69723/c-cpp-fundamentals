#include<iostream>
#include<cmath>
using namespace std;
float square(int x){
    float a=x;
    for(int i=1;i<=x;i++){
        a=(a+x/a)/2;
    }
    return a;   
}

int min(int x,int y){
    int a;
    if(x<y) a=x;
    else a=y;
    return a;
}

int maxa(int x,int y){
    int a;
    if(x>y) a=x;
    else a=y;
    return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<square(a)<<endl;
    cout<<min(a,b)<<endl;
    cout<<maxa(a,b)<<endl;  
    // cout<<sqrt(47691)<<endl;
    // cout<<max(a,b)<<endl;
    // cout<<min(a,b)<<endl;
}