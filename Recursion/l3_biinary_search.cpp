#include<iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>v,int s,int e,int key){
    //base case
    //case 1-> key not found
    if(s>e)
        return -1;

    int mid = (s+e)/2;
    //case 2-> key found
    if(v[mid]==key)
       return mid;

    // //arr[mid]<key-> right mai search
    // if(v[mid]<key){
    //     return binarySearch(v,mid+1,e,key);
    // }
    // else{//left side of the array
    //     return binarySearch(v,s,mid-1,key);
    // }

    return (v[mid]<key)? binarySearch(v,mid+1,e,key):binarySearch(v,s,mid-1,key);
}

int main(){
    vector<int>v{10,20,40,60,70,90,99};
    int target=99;

    int n=v.size();
    int s=0;
    int e=n-1;
    int ans=binarySearch(v,s,e,target);

    cout<<"Answer is: "<<ans<<endl;

    return 0;
}