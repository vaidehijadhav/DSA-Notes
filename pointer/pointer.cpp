<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    // int a=5;
    // //creatio of pointer
    // int* ptr=&a;
    // //access the value ptr is pointing to
    // cout<<"Address of a is: "<<&a<<endl;
    // cout<<"Value store ar prt is: "<<ptr<<endl;
    // cout<<"Value ptr is pointing to is: "<<*ptr<<endl; //dereference operator
    // cout<<"Addres of ptr is: "<<&ptr<<endl;

    // int a=5;
    // int* ptr=&a;
    
    // cout<<sizeof(ptr)<<endl;

    // char ch='a';
    // char* c=&ch;
    
    // cout<<sizeof(c)<<endl;

    // double d=1.098;
    // double* dtr=&d;
    
    // cout<<sizeof(dtr)<<endl;

    int a=10;
    int*p=&a;
    int*q=p;
    int*r=q;

    cout<<a<<endl; //10
    cout<<&a<<endl; //address of a
    cout<<p<<endl;  //address of a
    cout<<&p<<endl; //address of p
    cout<<*p<<endl;  //10
    cout<<q<<endl;  //address of a
    cout<<&q<<endl; //adddress of q
    cout<<*q<<endl; //10
    cout<<r<<endl;  //address of a
    cout<<&r<<endl; //address of r
    cout<<*r<<endl; //10 
    cout<<(*p+*q+*r)<<endl; //30
    cout<<(*p)*2+(*r)*3<<endl; //50
    cout<<(*p)/2-(*q/2)<<endl; //0

    return 0;
=======
#include <iostream>
using namespace std;

int main(){
    // int a=5;
    // //creatio of pointer
    // int* ptr=&a;
    // //access the value ptr is pointing to
    // cout<<"Address of a is: "<<&a<<endl;
    // cout<<"Value store ar prt is: "<<ptr<<endl;
    // cout<<"Value ptr is pointing to is: "<<*ptr<<endl; //dereference operator
    // cout<<"Addres of ptr is: "<<&ptr<<endl;

    // int a=5;
    // int* ptr=&a;
    
    // cout<<sizeof(ptr)<<endl;

    // char ch='a';
    // char* c=&ch;
    
    // cout<<sizeof(c)<<endl;

    // double d=1.098;
    // double* dtr=&d;
    
    // cout<<sizeof(dtr)<<endl;

    int a=10;
    int*p=&a;
    int*q=p;
    int*r=q;

    cout<<a<<endl; //10
    cout<<&a<<endl; //address of a
    cout<<p<<endl;  //address of a
    cout<<&p<<endl; //address of p
    cout<<*p<<endl;  //10
    cout<<q<<endl;  //address of a
    cout<<&q<<endl; //adddress of q
    cout<<*q<<endl; //10
    cout<<r<<endl;  //address of a
    cout<<&r<<endl; //address of r
    cout<<*r<<endl; //10 
    cout<<(*p+*q+*r)<<endl; //30
    cout<<(*p)*2+(*r)*3<<endl; //50
    cout<<(*p)/2-(*q/2)<<endl; //0

    return 0;
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
}