#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[][3],int rows,int cols){
    int max=INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    return max;
}

int getMin(int arr[][3],int rows,int cols){
    int min=INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    return min;
}

bool findKey(int arr[][3],int rows,int cols,int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }
    return false;
}

void printRowWiseSum(int arr[][3],int rows,int cols){
    // row sum
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void printColWiseSum(int arr[3][3],int rows,int cols){
    // col sum
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum=sum+arr[j][i];
        }
        cout<<sum<<endl;
    }
}

void transpose(int arr[3][3], int rows,int cols,int transposeArr[][3]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transposeArr[j][i]=arr[i][j];
        }
    }
}


void printArray(int arr[][3],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3];
    int rows=3;
    int cols=3;

    // input 
    cout<<"Enter the elements in array: "<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    // for(int i=0;i<rows;i++){
    //     for(int j=0;j<cols;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // printRowWiseSum(arr,rows,cols);
    // printColWiseSum(arr,rows,cols);

    // int key;
    // cout<<"Enter the key: "<<endl;
    // cin >>key ;

    // findKey(arr,rows,cols,key);
    // if(findKey){
    //     cout<<"true"<<endl;
    // }
    // else{
    //     cout<<"False"<<endl;
    // }

    // cout<<"The maximum number in arrays: "<<getMax(arr,rows,cols)<<endl;
    // cout<<"The Minimum number in array: "<<getMin(arr,rows,cols)<<endl;


    int transposeArr[3][3];
    transpose(arr,rows,cols,transposeArr);
    cout<<"Printing array again "<<endl;
    printArray(transposeArr,rows,cols);
    return 0;
}