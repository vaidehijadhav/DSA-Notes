#include<iostream>
#include<vector>
using namespace std;

int main(){
    // left rotated a array by 1 element
    // int arr[]={1,2,3,4,5};
    // int n=5;

    // int temp[n];
    // for(int i= 1;i<n;i++){
    //     temp[i-1]=arr[i];
    // }

    // temp[n-1]=arr[0];
    // for(int i=0;i<n;i++){
    //     cout<<temp[i]<<" ";
    // }

    int arr[]={1,2,3,4,5,6,7,8};
    int n=8;
    int k;
    cin>>k;

    int temp[n];
    for(int i=0;i<k;i++){
        temp[i]=arr[n-1];
        n--;
    }

    for(int i=0;i<n-k;i++){
        arr[i]=temp[k+i];
    }

    for(int i=0;i<n;i++){
    cout<<temp[i]<<" ";
}
    return 0;
}