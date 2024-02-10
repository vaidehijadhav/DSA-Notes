<<<<<<< HEAD
#include<iostream>
#include<vector>
using namespace std;

int indexOfPeakElement(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}

int main(){
    vector<int> arr{0,10,5,2};
    cout<<indexOfPeakElement(arr)<<endl;
    return 0;
=======
#include<iostream>
#include<vector>
using namespace std;

int indexOfPeakElement(vector<int> arr){
    int s = 0;
    int e = arr.size()-1;
    int mid = s+(e-s)/2;

    while(s<e){
        if(arr[mid]<arr[mid+1]){
            s = mid+1;
        }
        else{
            e=mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}

int main(){
    vector<int> arr{0,10,5,2};
    cout<<indexOfPeakElement(arr)<<endl;
    return 0;
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
}