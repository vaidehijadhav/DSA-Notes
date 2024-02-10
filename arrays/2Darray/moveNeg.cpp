<<<<<<< HEAD
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr{1,2,-3,4,-5,6};

    int s=0;
    int i=0;

    while(i<arr.size()){
        if(arr[i]<0){
            swap(arr[i],arr[s]);
            s++;
            i++;
        }
        else{
            i++;
        }
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    } 

    return 0;
=======
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int>arr{1,2,-3,4,-5,6};

    int s=0;
    int i=0;

    while(i<arr.size()){
        if(arr[i]<0){
            swap(arr[i],arr[s]);
            s++;
            i++;
        }
        else{
            i++;
        }
    }

    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    } 

    return 0;
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
}