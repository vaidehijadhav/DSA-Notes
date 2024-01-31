#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>arr{5,3,2,1,4};
    int n=arr.size();

    // inner loop will run n-1 times because last element will be sorted automatically
    for(int i=0;i<n-1;i++){

        // find the smallest element in the unsorted part
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }
        // swap the smallest element with the first element of unsorted part
        swap(arr[i],arr[minIndex]);
    }

    // print the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}