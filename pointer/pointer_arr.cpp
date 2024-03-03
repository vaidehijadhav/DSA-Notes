#include <iostream>
using namespace std;

void solve(int arr[]){
    cout<<"Size inside solve function "<< sizeof(arr)<<endl;
    cout<<"arr: "<<arr<<endl;
    cout<<"&arr: "<<&arr<<endl;
    arr[0]=50;
}

void update(int *p){
    cout<<"address stored in p is "<<p<<endl;
    cout<<"address of p is "<<&p<<endl;
    *p=*p+10;
}

int main(){

    int arr[4]={12,14,26,10};

    // cout<<arr<<endl;  //base address
    // cout<<&arr<<endl;   //base address
    // cout<<arr[2]<<endl;  // value at 2nd index
    // cout<<&arr[2]<<endl;  //address of 2nd index value

    // int * p=arr;
    // cout<<p<<endl;    //base address of array
    // cout<<&p<<endl;   //address of pointer

    // cout<<*arr<<endl;      //value at 0th index
    // cout<<*arr+1<<endl;    //value at 0th index +1
    // cout<<*(arr)+1<<endl;  //value at 0th index +1 
    // cout<<*(arr+1)<<endl;  //value at 1st index
    // cout<<*arr+2<<endl;    //value at 0th index +2

    // int i=0;
    // cout<<arr[i]<<endl;    //value at 0th index
    // cout<<i[arr]<<endl;    //value at 0th index
    // cout<<*(arr+i)<<endl;  //value at 0th index
    // cout<<*(i+arr)<<endl;  //value at 0th index

    // int arr[10];
    // cout<<sizeof(arr)<<endl;  //40 (size of the whole array)

    // int *p=arr;
    // cout<<sizeof(p)<<endl;
    // cout<<sizeof(*p)<<endl;
    
    // char ch[10]="vaidehi";
    // char *c=ch;

    // cout<<ch<<endl;
    // cout<<&ch<<endl;
    // cout<<ch[0]<<endl;

    // cout<<&c<<endl;
    // cout<<*c<<endl;
    // cout<<c<<endl;

    // char name[9]="sherBano";
    // char *c=&name[0];

    // cout<<name<<endl;
    // cout<<&name<<endl;
    // cout<<*(name+3)<<endl;
    // cout<<c<<endl;   // print whole string
    // cout<<&c<<endl;
    // cout<<*(c+3)<<endl;
    // cout<<c+2<<endl; // print string from 2nd index charcater
    // cout<<*c<<endl;
    // cout<<c+8<<endl;

    // int arr[10] = {1,2,3,4};

    // cout<<"Size inside main function"<< sizeof(arr) <<endl;

    // cout<<"arr: "<<arr<<endl;
    // cout<<"&arr: "<<&arr<<endl;

    // //printing array inside main
    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    // cout<<endl<<endl<<"Now calling solve function"<<endl;

    // solve(arr);
    // cout<<"Wapas main function me aagye h"<<endl;

    // for(int i=0;i<10;i++){
    //     cout<<arr[i]<<" ";
    // }cout<<endl;

    // int a=5;
    // cout<<"Address of a is "<<&a<<endl;
    // int *ptr=&a;
    // cout<<"address stored in ptr is "<<ptr<<endl;
    // cout<<"address of ptr is "<<&ptr<<endl;

    // update(ptr);
    // cout<<"value of a is: "<<a<<endl;

    return 0;
}