#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>=65 && ch<=91 || ch>=97 && ch<=123){
        cout<<"enter character is alphabet";
    }
    else cout<<"enter character is not alphabet";
}