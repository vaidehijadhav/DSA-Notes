#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>arr{10,1,7,6,14,9};
    int n=arr.size();

    for(int round=1;round<n;round++){
        // fetch element
        int val = arr[round];
        // compare
        int j = round-1;
        for(; j>=0; j--){
            if(arr[j]>val){
                // shift
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        // copy
        arr[j+1]=val;
    }

    // print the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}