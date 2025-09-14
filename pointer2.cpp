#include<iostream>
using namespace std;
void find(int n,int *ptr1,int *ptr2){
   *ptr2=n%10;
   while(n>9){
    n/=10;
   }
   *ptr1=n;
}

int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    int lastdigit,firstdigit;
    int *ptr1=&firstdigit, *ptr2=&lastdigit;
    find(n,ptr1,ptr2);
    cout<<firstdigit<<" "<<lastdigit;
    return 0;
}