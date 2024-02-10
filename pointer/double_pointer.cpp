#include<iostream>
using namespace std;

void solve(int**q){
//    q=q+1;
//    *q=*q+1;
    **q=**q+1;
}

int main(){
    // int a=5;
    // int*p=&a;
    // int**q=&p;

    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<p<<endl;
    // cout<<&p<<endl;
    // cout<<*p<<endl;
    // cout<<q<<endl;
    // cout<<&q<<endl;
    // cout<<*q<<endl;
    // cout<<**q<<endl;

    // int a=5;
    // int *p=&a;
    // int **q=&p;

    // solve(q);
    // cout<<a<<endl;

    int a=5;
    // creating reference variable
    int &b=a;

    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}