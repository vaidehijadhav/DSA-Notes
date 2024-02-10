<<<<<<< HEAD
#include <iostream>
#include <limits.h>
using namespace std;

// void printArr(int arr[],int n,int i){
//     if(i>=n){
//         return;
//     }
//     cout<<arr[i]<<" ";
//     printArr(arr,n,i+1);
// }

// void findMax(int arr[],int n,int i,int& max){
//     //base case
//     if(i>=n){
//         //array khatam hogaya aur pura traverse hogaya toh vapas aajao
//         return;
//     }
//     //1st case solve kro
//     if(arr[i]>max){
//         max=arr[i];
//     }
//     //bakki recursion kr lega
//     findMax(arr, n,i+1,max);
// }

// void findMin(int arr[],int n,int i,int& min){
//     if(i>=n){
//         return;
//     }
//     if(arr[i]<min){
//         min=arr[i];
//     }

//     findMin(arr,n,i+1,min);
// }

//  bool checkkey(string str,int i,int n,char key){
//     if(i>=n){
//         return false;
//     }
//     if(str[i]=key){
//         return true;
//     }
//     return checkkey(str,i+1,n,key);
// }

// int checkkey(string& str,int i,int &n,char &key){

//     if(i>=n){
//         return -1;
//     }

//     if(str[i]==key){
//         return i;
//     }
//     return checkkey(str,i+1,n,key);
// }/

// void checkkey(string& str,int i,int &n,char &key){
//     if(i>=n){
//         return;
//     }
//     if(str[i]==key){
//         cout<<"Found at "<<i<<endl;
//     }
//     checkkey(str,i+1,n,key);
// }

void printdigit(int n){
    if(n==0){
        return;
    }
    

    int digit=n%10;
    int newdigit=n/10;
    printdigit(newdigit);
    cout<<digit<<" ";

    
}

int main(){

    // int arr[5]={10,20,30,40,50};
    // int n=5;
    // int i=0;
    // printArr(arr,n,i);

    // int arr[]={66,90,54,34,26,98,45,90};
    // int n=8;
    // int max=INT_MIN;
    // int min=INT_MAX;
    // int i=0;

    // findMax(arr,n,i,max);
    // cout<<"The maximum number is "<<max<<endl;

    // findMin(arr,n,i,min);
    // cout<<"The minimum number is "<<min<<endl;


    // string str="vaidehi";
    // int n=str.length();
    // int i=0;
    // char key='i';

    // bool ans=checkkey(str,i,n,key);

    // int ans=checkkey(str,i,n,key);
    // cout<<"Answer is: "<<ans<<endl;

    // checkkey(str,i,n,key);

    int n=674;
    printdigit(n);
    return 0;
=======
#include <iostream>
#include <limits.h>
using namespace std;

// void printArr(int arr[],int n,int i){
//     if(i>=n){
//         return;
//     }
//     cout<<arr[i]<<" ";
//     printArr(arr,n,i+1);
// }

// void findMax(int arr[],int n,int i,int& max){
//     //base case
//     if(i>=n){
//         //array khatam hogaya aur pura traverse hogaya toh vapas aajao
//         return;
//     }
//     //1st case solve kro
//     if(arr[i]>max){
//         max=arr[i];
//     }
//     //bakki recursion kr lega
//     findMax(arr, n,i+1,max);
// }

// void findMin(int arr[],int n,int i,int& min){
//     if(i>=n){
//         return;
//     }
//     if(arr[i]<min){
//         min=arr[i];
//     }

//     findMin(arr,n,i+1,min);
// }

//  bool checkkey(string str,int i,int n,char key){
//     if(i>=n){
//         return false;
//     }
//     if(str[i]=key){
//         return true;
//     }
//     return checkkey(str,i+1,n,key);
// }

// int checkkey(string& str,int i,int &n,char &key){

//     if(i>=n){
//         return -1;
//     }

//     if(str[i]==key){
//         return i;
//     }
//     return checkkey(str,i+1,n,key);
// }/

// void checkkey(string& str,int i,int &n,char &key){
//     if(i>=n){
//         return;
//     }
//     if(str[i]==key){
//         cout<<"Found at "<<i<<endl;
//     }
//     checkkey(str,i+1,n,key);
// }

void printdigit(int n){
    if(n==0){
        return;
    }
    

    int digit=n%10;
    int newdigit=n/10;
    printdigit(newdigit);
    cout<<digit<<" ";

    
}

int main(){

    // int arr[5]={10,20,30,40,50};
    // int n=5;
    // int i=0;
    // printArr(arr,n,i);

    // int arr[]={66,90,54,34,26,98,45,90};
    // int n=8;
    // int max=INT_MIN;
    // int min=INT_MAX;
    // int i=0;

    // findMax(arr,n,i,max);
    // cout<<"The maximum number is "<<max<<endl;

    // findMin(arr,n,i,min);
    // cout<<"The minimum number is "<<min<<endl;


    // string str="vaidehi";
    // int n=str.length();
    // int i=0;
    // char key='i';

    // bool ans=checkkey(str,i,n,key);

    // int ans=checkkey(str,i,n,key);
    // cout<<"Answer is: "<<ans<<endl;

    // checkkey(str,i,n,key);

    int n=674;
    printdigit(n);
    return 0;
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
}