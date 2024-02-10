<<<<<<< HEAD
#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int>&arr,int &n,int i){
    if(i==n-1){
        return true;
    }
    if(arr[i+1]<arr[i]){
        return false;
    }
    return checkSorted(arr,n,i+1);
}

int main (){
    vector<int>v{10,20,30,90,60};

    int n=v.size();
    int i=0;

    bool isSorted = checkSorted(v,n,i);

    if(isSorted){
        cout<<"Array sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
=======
#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int>&arr,int &n,int i){
    if(i==n-1){
        return true;
    }
    if(arr[i+1]<arr[i]){
        return false;
    }
    return checkSorted(arr,n,i+1);
}

int main (){
    vector<int>v{10,20,30,90,60};

    int n=v.size();
    int i=0;

    bool isSorted = checkSorted(v,n,i);

    if(isSorted){
        cout<<"Array sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
    return 0;
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
}