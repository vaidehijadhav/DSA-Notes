#include <iostream>
using namespace std;

//Navies Approach to solve the problem is by using a stack data
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2; i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int countPrime(int n){
    int count=0;

    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            count++;
        }
    }
    return count;
}

int main(){
    
    int n;
    cin>>n;

    cout<<countPrime(n)<<endl;
    return 0;
}