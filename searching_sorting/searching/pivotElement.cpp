<<<<<<< HEAD
#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(mid+1<arr.size() && arr[mid]>arr[mid+1]){
            return mid;
        }
        if( mid-1>=0 && arr[mid]<arr[mid-1]){
            return mid-1;
        }
        if(arr[s]>arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
}

int  main(){
    vector<int> arr{3,4,5,6,7,1,2};
    int ans = findPivot(arr);

    cout<<"index of element "<<ans<<endl;
=======
#include<iostream>
#include<vector>
using namespace std;

int findPivot(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(mid+1<arr.size() && arr[mid]>arr[mid+1]){
            return mid;
        }
        if( mid-1>=0 && arr[mid]<arr[mid-1]){
            return mid-1;
        }
        if(arr[s]>arr[mid]){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
}

int  main(){
    vector<int> arr{3,4,5,6,7,1,2};
    int ans = findPivot(arr);

    cout<<"index of element "<<ans<<endl;
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
}