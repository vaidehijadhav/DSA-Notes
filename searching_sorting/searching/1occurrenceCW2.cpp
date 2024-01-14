#include<iostream>
#include<vector>
using namespace std;

int firstOccurrence(vector<int>v, int target){
    int s = 0;
    int e = v.size()-1;
    int mid = s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if(target == v[mid]){
            ans=mid;
            e=mid-1;
        }
        else if(target < v[mid]){
            e=mid-1;
        }
        else if(target > v[mid]){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
    vector<int> v {1,3,4,4,4,4,9,7};
    int target=4;

    int indexOfFirstOcc = firstOccurrence(v, target);

    cout<<"ans is "<<indexOfFirstOcc<<endl;


    return 0;
}