#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{10,1,7,6,14,9};
    int n= arr.size();

    for(int round=1;round<n;round++){
        bool swapedd=false;
        for(int i=0;i<n-round;i++){
            if(arr[i]>arr[i+1]){
                swapedd=true;
                swap(arr[i],arr[i+1]);
            }
        }
        if(swapedd==false){
            // sort ho chuka hai no need to check in further rounds
            break;
        }
    }

    // print the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}