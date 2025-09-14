#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x;
    cin>>x;
    if(x<0) cout<< 1-fabs(x-(int)x);
    else   cout<<x - (int)x;
}