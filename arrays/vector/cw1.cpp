<<<<<<< HEAD
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// int findUnique(vector<int>arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }

int main(){
    // vector<int>arr;
    // // int ans=(sizeof(arr)/sizeof(int));
    // // cout<<ans<<endl;

    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;

    // // insert element
    // arr.push_back(5);
    // arr.push_back(6);

    // // print vector
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;
    // // remove element
    // arr.pop_back();

    // // print vector after removing an element
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // unique element
    // int n;
    // cout<<"Enter the size of array"<<endl;
    // cin>>n;

    // vector<int>arr(n);
    // cout<<"Enter the elements "<<endl;
    // //Taking input
    // for(int i=0;i<arr.size();i++){
    //     cin>>arr[i];
    // }

    // int uniqueElement=findUnique(arr);
    // cout<<"Unique Element Is "<<uniqueElement<<endl;


    //  union of 2 arrays
    // int arr[]={1,3,4,5,6};
    // int sizea=5;
    // int brr[]={2,7,8,9};
    // int sizeb=4;

    // vector<int>ans;

    // //push all element of vector arr
    // for(int i=0;i<sizea;i++){
    //     ans.push_back(arr[i]);
    // }

    // // push all element of vector brr
    // for(int i=0;i<sizeb;i++){
    //     ans.push_back(brr[i]);
    // }

    // // print ans
    // cout<<"Printing ans array"<<endl;
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }


    //Intersection Of element
    // vector<int>arr{1,2,3,4,6,8};
    // vector<int>brr{2,3,5,9};

    // vector<int>ans;
    // for(int i=0;i<arr.size();i++){
    //     int element=arr[i];

    //     for(int j=0;j<brr.size();j++){
    //         if(element==brr[j]){
    //             brr[j]=INT_MIN;
    //             ans.push_back(element);
    //         }
    //     }
    // }

    // for(auto value: ans){
    //     cout<<value<<" ";
    // }

    // Union of sets
    // vector<int>arr{1,2,3,4,5,6,7};
    // vector<int>brr{3,6,8,9};

    // vector<int>ans;

    // for(int i=0;i<arr.size();i++){
    //     ans.push_back(arr[i]);
    // }

    // for(int i=0;i<brr.size();i++){
    //     bool isduplicate=false;
    //     for(int j=0;j<ans.size();j++){
    //         if(brr[i]==ans[j]){
    //             isduplicate=true;
    //             break;
    //         }
    //     }

    //     if(!isduplicate){
    //         ans.push_back(brr[i]);
    //     }
    // }

    // for(auto value:ans){
    //     cout<<value<<" ";
    // }


    // Pair Sum
    // vector<int>arr{10,20,30,40,50,60};
    // int sum=50;

    // // print all pairs
    // //outer loop will traverse for each element
    // for(int i=0;i<arr.size();i++){
    //     int element=arr[i];

    //     // for every element, will traverse on aage wala elements
    //     for(int j=i+1;j<arr.size();j++){
    //         // cout<<"("<<element<<","<<arr[j]<<")"<<endl;
    //         if(element+arr[j]==sum){
    //             cout<<"Pair Found "<< element<<","<<arr[j]<<endl;
    //         }
    //     }
    // }


    // Triplates
    // vector<int>arr{10,20,30,40,50,60};
    // int sum=100;

    // for(int i =0;i<arr.size();i++){
    //     int element1=arr[i];

    //     for(int j=i+1;j<arr.size();j++){
    //         int element2=arr[j];

    //         for(int k=j+1;k<arr.size();k++){
    //             int element3=arr[k];

    //             if(element1 +element2+ element3 ==sum){
    //                 cout<<element1<<","<<element2<<","<<element3<<endl;
    //             }
    //         }
    //     }
    // }

    // Four No.
    // vector<int>arr{10,20,30,40,11,12,13,44};
    // int sum=80;
    // for(int i=0;i<arr.size();i++){
    //     int element=arr[i];

    //     for(int j=i+1;j<arr.size();j++){
    //         int element1=arr[j];

    //         for(int k=j+1;k<arr.size();k++){
    //             int element2=arr[k];

    //             for(int l=k+1;l<arr.size();l++){
    //                 int element3=arr[l];


    //                 if(element+element1+element2+element3==sum){
    //                     cout<<element<<","<<element1<<","<<element2<<","<<element3<<endl;
    //                 }
    //             }
    //         }
    //     }
    // }

    // sort 0's and 1's
    vector<int>arr{1,0,0,1,1,0,0,0,1,0,1,1,1,1,0};

    int start=0;
    int end=arr.size()-1;
    int i=0;

    while(start<=end){
        if(arr[i]==0){
            swap(arr[i],arr[start]);
            start++;
            i++;
        }
        else{
            swap(arr[end],arr[i]);
            end--;
        }
    }

    for(auto value:arr){
        cout<<value<<" ";
    }
    return 0;
=======
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// int findUnique(vector<int>arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }

int main(){
    // vector<int>arr;
    // // int ans=(sizeof(arr)/sizeof(int));
    // // cout<<ans<<endl;

    // cout<<arr.size()<<endl;
    // cout<<arr.capacity()<<endl;

    // // insert element
    // arr.push_back(5);
    // arr.push_back(6);

    // // print vector
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }

    // cout<<endl;
    // // remove element
    // arr.pop_back();

    // // print vector after removing an element
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // unique element
    // int n;
    // cout<<"Enter the size of array"<<endl;
    // cin>>n;

    // vector<int>arr(n);
    // cout<<"Enter the elements "<<endl;
    // //Taking input
    // for(int i=0;i<arr.size();i++){
    //     cin>>arr[i];
    // }

    // int uniqueElement=findUnique(arr);
    // cout<<"Unique Element Is "<<uniqueElement<<endl;


    //  union of 2 arrays
    // int arr[]={1,3,4,5,6};
    // int sizea=5;
    // int brr[]={2,7,8,9};
    // int sizeb=4;

    // vector<int>ans;

    // //push all element of vector arr
    // for(int i=0;i<sizea;i++){
    //     ans.push_back(arr[i]);
    // }

    // // push all element of vector brr
    // for(int i=0;i<sizeb;i++){
    //     ans.push_back(brr[i]);
    // }

    // // print ans
    // cout<<"Printing ans array"<<endl;
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }


    //Intersection Of element
    // vector<int>arr{1,2,3,4,6,8};
    // vector<int>brr{2,3,5,9};

    // vector<int>ans;
    // for(int i=0;i<arr.size();i++){
    //     int element=arr[i];

    //     for(int j=0;j<brr.size();j++){
    //         if(element==brr[j]){
    //             brr[j]=INT_MIN;
    //             ans.push_back(element);
    //         }
    //     }
    // }

    // for(auto value: ans){
    //     cout<<value<<" ";
    // }

    // Union of sets
    // vector<int>arr{1,2,3,4,5,6,7};
    // vector<int>brr{3,6,8,9};

    // vector<int>ans;

    // for(int i=0;i<arr.size();i++){
    //     ans.push_back(arr[i]);
    // }

    // for(int i=0;i<brr.size();i++){
    //     bool isduplicate=false;
    //     for(int j=0;j<ans.size();j++){
    //         if(brr[i]==ans[j]){
    //             isduplicate=true;
    //             break;
    //         }
    //     }

    //     if(!isduplicate){
    //         ans.push_back(brr[i]);
    //     }
    // }

    // for(auto value:ans){
    //     cout<<value<<" ";
    // }


    // Pair Sum
    // vector<int>arr{10,20,30,40,50,60};
    // int sum=50;

    // // print all pairs
    // //outer loop will traverse for each element
    // for(int i=0;i<arr.size();i++){
    //     int element=arr[i];

    //     // for every element, will traverse on aage wala elements
    //     for(int j=i+1;j<arr.size();j++){
    //         // cout<<"("<<element<<","<<arr[j]<<")"<<endl;
    //         if(element+arr[j]==sum){
    //             cout<<"Pair Found "<< element<<","<<arr[j]<<endl;
    //         }
    //     }
    // }


    // Triplates
    // vector<int>arr{10,20,30,40,50,60};
    // int sum=100;

    // for(int i =0;i<arr.size();i++){
    //     int element1=arr[i];

    //     for(int j=i+1;j<arr.size();j++){
    //         int element2=arr[j];

    //         for(int k=j+1;k<arr.size();k++){
    //             int element3=arr[k];

    //             if(element1 +element2+ element3 ==sum){
    //                 cout<<element1<<","<<element2<<","<<element3<<endl;
    //             }
    //         }
    //     }
    // }

    // Four No.
    // vector<int>arr{10,20,30,40,11,12,13,44};
    // int sum=80;
    // for(int i=0;i<arr.size();i++){
    //     int element=arr[i];

    //     for(int j=i+1;j<arr.size();j++){
    //         int element1=arr[j];

    //         for(int k=j+1;k<arr.size();k++){
    //             int element2=arr[k];

    //             for(int l=k+1;l<arr.size();l++){
    //                 int element3=arr[l];


    //                 if(element+element1+element2+element3==sum){
    //                     cout<<element<<","<<element1<<","<<element2<<","<<element3<<endl;
    //                 }
    //             }
    //         }
    //     }
    // }

    // sort 0's and 1's
    vector<int>arr{1,0,0,1,1,0,0,0,1,0,1,1,1,1,0};

    int start=0;
    int end=arr.size()-1;
    int i=0;

    while(start<=end){
        if(arr[i]==0){
            swap(arr[i],arr[start]);
            start++;
            i++;
        }
        else{
            swap(arr[end],arr[i]);
            end--;
        }
    }

    for(auto value:arr){
        cout<<value<<" ";
    }
    return 0;
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
}