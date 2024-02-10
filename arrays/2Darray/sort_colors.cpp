<<<<<<< HEAD
#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int start=0;
    int end=nums.size()-1;
    int i=0;

    while(start<end && i<=end){
        if(nums[i]==0){
            swap(nums[i],nums[start]);
            start++;
            i++;
        }
        else if(nums[i]==2){
            swap(nums[i],nums[end]);
            end--;
        }
        else{
            i++;
        }
    }

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}  

int main(){

    vector<int>arr{1,2,0,1,0,2,0,2,1,0,2};

    sortColors(arr);


    return 0;
=======
#include<iostream>
#include<vector>
using namespace std;

void sortColors(vector<int>& nums) {
    int start=0;
    int end=nums.size()-1;
    int i=0;

    while(start<end && i<=end){
        if(nums[i]==0){
            swap(nums[i],nums[start]);
            start++;
            i++;
        }
        else if(nums[i]==2){
            swap(nums[i],nums[end]);
            end--;
        }
        else{
            i++;
        }
    }

    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
}  

int main(){

    vector<int>arr{1,2,0,1,0,2,0,2,1,0,2};

    sortColors(arr);


    return 0;
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
}