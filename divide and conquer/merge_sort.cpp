<<<<<<< HEAD
#include <iostream>
using namespace std;


void merge(int*arr, int s,int e){
    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;
    
    //assume to create arrays for len1, len2 length
    int*left=new int[len1];
    int*right=new int[len2];

    //copy values
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }

    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }

    //merge logic
    int leftIndex=0;
    int rightIndex=0;
    int mainArrayIndex=s;

    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex]<right[rightIndex]){
            arr
        }
    }
}

int mergeSort(int*arr, int s,int e){
    //base case
    //s==e -->single element
    //s>e -->invalid array
    if(s>=e){
        return;
    }

    int mid=(s+e)/2;

    //left part sort kar do recursion bhaiya
    mergeSort(arr,s,mid);

    //right part sort kar do
    mergeSort(arr,mid+1,e);

    //merge 2 sorted arrays
    merge(arr,s,e);
}

int main(){
    int arr[]={4,5,13,2,12};
    int n=5;

    int s=0;
    int e=n-1;

    mergeSort(arr,s,e);
    return 0;
=======
#include <iostream>
using namespace std;


void merge(int*arr, int s,int e){
    int mid=(s+e)/2;

    int len1=mid-s+1;
    int len2=e-mid;
    
    //assume to create arrays for len1, len2 length
    int*left=new int[len1];
    int*right=new int[len2];

    //copy values
    int k=s;
    for(int i=0;i<len1;i++){
        left[i]=arr[k];
        k++;
    }

    k=mid+1;
    for(int i=0;i<len2;i++){
        right[i]=arr[k];
        k++;
    }

    //merge logic
    int leftIndex=0;
    int rightIndex=0;
    int mainArrayIndex=s;

    while(leftIndex<len1 && rightIndex<len2){
        if(left[leftIndex]<right[rightIndex]){
            arr
        }
    }
}

int mergeSort(int*arr, int s,int e){
    //base case
    //s==e -->single element
    //s>e -->invalid array
    if(s>=e){
        return;
    }

    int mid=(s+e)/2;

    //left part sort kar do recursion bhaiya
    mergeSort(arr,s,mid);

    //right part sort kar do
    mergeSort(arr,mid+1,e);

    //merge 2 sorted arrays
    merge(arr,s,e);
}

int main(){
    int arr[]={4,5,13,2,12};
    int n=5;

    int s=0;
    int e=n-1;

    mergeSort(arr,s,e);
    return 0;
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
}