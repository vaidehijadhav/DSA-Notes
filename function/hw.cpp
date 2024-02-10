<<<<<<< HEAD
#include <iostream>
using namespace std;

// void Even_odd(int n){
//     if (n%2==0){
//         cout<<"Even";
//     }
//     else{
//         cout << "Odd";
//     }
// }

// factorial
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// set kth bit
// int setKBit(int n, int k){
//     int mask=1<<k;
//     int ans= n|mask;
//     return ans;
// }

// reverse the no.
int reverseNum(int n){
    int ans=0;
    // int rem=0;
    while (n!=0)
    {
        int digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    // int k;
    // cin>>k;

    // int answer=setKBit(n,k);

    // cout<<answer<<endl;
    // // Even_odd(n);
    // cout<<factorial(n)<<endl;

    cout<<reverseNum(n)<<endl;
=======
#include <iostream>
using namespace std;

// void Even_odd(int n){
//     if (n%2==0){
//         cout<<"Even";
//     }
//     else{
//         cout << "Odd";
//     }
// }

// factorial
// int factorial(int n){
//     int fact=1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// set kth bit
// int setKBit(int n, int k){
//     int mask=1<<k;
//     int ans= n|mask;
//     return ans;
// }

// reverse the no.
int reverseNum(int n){
    int ans=0;
    // int rem=0;
    while (n!=0)
    {
        int digit=n%10;
        ans=ans*10+digit;
        n=n/10;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;

    // int k;
    // cin>>k;

    // int answer=setKBit(n,k);

    // cout<<answer<<endl;
    // // Even_odd(n);
    // cout<<factorial(n)<<endl;

    cout<<reverseNum(n)<<endl;
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
}