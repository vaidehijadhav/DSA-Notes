#include<iostream>
#include<vector>
using namespace std;

int lastOccurance(vector<int>v, int target){
    int s=0;
    int e=v.size()-1;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(target == v[mid]){
            ans = mid;
            s = mid + 1;
        }
        else if(target < v[mid]){
            e = mid -1;
        }
        else if(target > v[mid]){
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}


int main(){
    vector<int>v{1,3,7,7,7,7,7,7,7,7,7,8,9};
    int target = 7;

    int indexOfLastOcc = lastOccurance(v, target);
    cout<<"Last Occurance is at "<<indexOfLastOcc<<endl;
    return 0;
}