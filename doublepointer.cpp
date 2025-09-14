#include<iostream>
using namespace std;
int main(){
    int n=1;
    int *ptr=&n;
    int **p=&ptr;
    cout<<&n<<" "<<ptr<<" "<<*p;
}