#include <iostream>
#include<math.h>
using namespace std;

//factorial
// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     int ans=n*factorial(n-1);
//     return ans;
// }

//counting reverse and forword
// void print(int n){
//     if(n==0){
//         return;
//     }
//     cout<<n;
//     print(n-1);
// }

// void printCount(int n){
//     if(n==0){
//         return;
//     }
//     printCount(n-1);
//     cout<<n<<" ";
// }

//power of two
// bool powerTwo(int n){
//     if(n==0){
//         return false;
//     }
//     return ((n==1)||(n%2==0 && powerTwo(n/2)));
// }

//Fibonacci series
// int fib(int n){
//     if(n==1){
//         return 0;
//     }
//     if(n==2){
//         return 1;
//     }

//     int ans=fib(n-1)+fib(n-2);
//     return ans;
// }

// int climbStairs(int n){
//     if(n==0||n==1){
//         return 1;
//     }
//     return climbStairs(n-1)+climbStairs(n-2);
// }

int main(){

    int n;
    cin>>n;
    
    // int ans=factorial(n);
    // cout<<"The factorial of "<<n<<" is "<<ans;
    // print(n);
    // printCount(n);
    // cout<<powerTwo(n);
    // int ans=fib(n);
    // cout<<"The Fibonacci series "<<ans;
    // cout<<climbStairs(n);
    return 0;
}