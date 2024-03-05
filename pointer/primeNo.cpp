#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

//sieve eratosthemes
int countPrime(int n){
    if(n == 0) return 0;

    vector<bool>prime(n,true);  //all are prime marked already
    prime[0]=prime[1]=false;

    int ans =0;
    for(int i=2;i<n;i++){
        if(prime[i]){
            ans++;

            int j=2*i;
            while(j<n){
                prime[j]=false;
                j+=i;
            }
        }
    }
    return ans; 
}

//Square root approach.
bool isPrime(int n){
    if(n<=1){
        return false;
    }

    int sqrtN = sqrt(n);
    for(int i = 2; i<=sqrtN; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

//Navies Approach to solve the problem is by using a stack data
// bool isPrime(int n){
//     if(n<=1){
//         return false;
//     }
//     for(int i=2; i<n;i++){
//         if(n%i==0){
//             return false;
//         }
//     }
//     return true;
// }

// int countPrime(int n){
//     int count=0;

//     for(int i=2;i<=n;i++){
//         if(isPrime(i)){
//             count++;
//         }
//     }
//     return count;
// }

 

int main(){
    
    int n;
    cin>>n;

    cout<<countPrime(n)<<endl;
    return 0;
}