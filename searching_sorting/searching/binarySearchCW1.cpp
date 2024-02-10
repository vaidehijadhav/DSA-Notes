#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start<=end){
        if(arr[mid] == target){
            return mid;
        }
        if(arr[mid]<target){     //left main search karo
            end = mid - 1;
        }
        else{                  //right mai search karo
            start = mid+1;
        }
        mid = start + (end - start)/2;
    } 
    return -1;
}

int main(){
    // int arr[] = {2,4,6,8,10,12,16};
    // int size = 7;
    // int target = 2;

    // int indexOftarget = binarySearch(arr, size, target);
    
    // if(indexOftarget == -1){
    //     cout<<"Target is not found"<<endl;
    // }
    // else{
    //     cout<<"Target is found at"<<indexOftarget<<endl;
    // }

    vector<int> v {1,2,5,7,8,11,24};

    if(binary_search(v.begin(),v.end(),11)){  //STL Pre define function
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
}