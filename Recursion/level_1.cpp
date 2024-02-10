<<<<<<< HEAD
#include<iostream>
using namespace std;

// int factorial(int n){
//     cout<<"Function is called for n: "<<n<<endl;
//     //base case
//     if(n==1)
//         return 1;
    
//     int ans=n*factorial(n-1);
//     return ans;
// }


int fib(int n){
    //base case
    if(n==1){
        //first term 
        return 0;
    }
    if (n==2){
        //second term
        return 1;
    }
    
    int ans=fib(n-1)+fib(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    // int ans=factorial(n);

    // cout<<"Answer is: "<<ans<<endl;
    int ans =fib(n);
    cout<<n<<"The term is: "<<ans<<endl;


    return 0;
=======
#include<iostream>
using namespace std;

// int factorial(int n){
//     cout<<"Function is called for n: "<<n<<endl;
//     //base case
//     if(n==1)
//         return 1;
    
//     int ans=n*factorial(n-1);
//     return ans;
// }


int fib(int n){
    //base case
    if(n==1){
        //first term 
        return 0;
    }
    if (n==2){
        //second term
        return 1;
    }
    
    int ans=fib(n-1)+fib(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;

    // int ans=factorial(n);

    // cout<<"Answer is: "<<ans<<endl;
    int ans =fib(n);
    cout<<n<<"The term is: "<<ans<<endl;


    return 0;
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
}