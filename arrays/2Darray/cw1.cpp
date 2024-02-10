#include<iostream>
#include<limits.h>
using namespace std;

// Function to print sum of each row
void printRowWiseSum(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        int sum=0;
        for(int j=0; j<cols; j++){
            sum=sum+arr[i][j];
        }
        cout<<"Sum of row "<<i+1<<" is: "<<sum<<endl;
    }
}


// Function to print sum of each column
void printColWiseSum(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        int sum=0;
        for(int j=0; j<cols; j++){
            sum=sum+arr[j][i];
        }
        cout<<"Sum of column "<<i+1<<" is: "<<sum<<endl;
    }
}


// Function to search an element in 2D array
bool findKey(int arr[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]==key)
                return true;
        }
    }
    return false;
}


// function to print maximum number in 2D array
int getMax(int arr[][3], int rows, int cols){
    int maxi = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}


// function to print minimum number in 2d array
int getMin(int arr[][3], int rows, int cols){
    int mini=INT_MAX;
    for(int i=0; i< rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;
}

// function to transpose a matrix  
void transpose(int arr[][3], int rows, int cols, int transposeArr[][3]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            transposeArr[i][j]=arr[j][i];
        }
    }
}

int main(){
    int arr[3][3];
    int rows=3;
    int cols=3;

    // Taking array in input
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    // Printing array
    cout<<"Array is: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // printRowWiseSum(arr, rows, cols);
    // printColWiseSum(arr, rows, cols);

    // int key;
    // cout<<"Enter the number to be searched: "<<endl;
    // cin>>key;

    // if(findKey(arr, rows, cols, key)){
    //     cout<<"Key found"<<endl;
    // }
    // else{
    //     cout<<"Key not found"<<endl;
    // }

    // cout<<"Maximum number in array is: "<<getMax(arr, rows, cols)<<endl;

    // cout<<"Minimum number in array is: "<<getMin(arr, rows, cols)<<endl;


    // Transpose of matrix
    int transposeArr[3][3];
    transpose(arr, rows, cols, transposeArr);
    cout<<"Transpose Array is: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<transposeArr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
#include<iostream>
#include<limits.h>
using namespace std;

// Function to print sum of each row
void printRowWiseSum(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        int sum=0;
        for(int j=0; j<cols; j++){
            sum=sum+arr[i][j];
        }
        cout<<"Sum of row "<<i+1<<" is: "<<sum<<endl;
    }
}


// Function to print sum of each column
void printColWiseSum(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        int sum=0;
        for(int j=0; j<cols; j++){
            sum=sum+arr[j][i];
        }
        cout<<"Sum of column "<<i+1<<" is: "<<sum<<endl;
    }
}


// Function to search an element in 2D array
bool findKey(int arr[][3], int rows, int cols, int key){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]==key)
                return true;
        }
    }
    return false;
}


// function to print maximum number in 2D array
int getMax(int arr[][3], int rows, int cols){
    int maxi = INT_MIN;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]>maxi){
                maxi=arr[i][j];
            }
        }
    }
    return maxi;
}


// function to print minimum number in 2d array
int getMin(int arr[][3], int rows, int cols){
    int mini=INT_MAX;
    for(int i=0; i< rows; i++){
        for(int j=0; j<cols; j++){
            if(arr[i][j]<mini){
                mini=arr[i][j];
            }
        }
    }
    return mini;
}

// function to transpose a matrix  
void transpose(int arr[][3], int rows, int cols, int transposeArr[][3]){
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            transposeArr[i][j]=arr[j][i];
        }
    }
}

int main(){
    int arr[3][3];
    int rows=3;
    int cols=3;

    // Taking array in input
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }

    // Printing array
    cout<<"Array is: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // printRowWiseSum(arr, rows, cols);
    // printColWiseSum(arr, rows, cols);

    // int key;
    // cout<<"Enter the number to be searched: "<<endl;
    // cin>>key;

    // if(findKey(arr, rows, cols, key)){
    //     cout<<"Key found"<<endl;
    // }
    // else{
    //     cout<<"Key not found"<<endl;
    // }

    // cout<<"Maximum number in array is: "<<getMax(arr, rows, cols)<<endl;

    // cout<<"Minimum number in array is: "<<getMin(arr, rows, cols)<<endl;


    // Transpose of matrix
    int transposeArr[3][3];
    transpose(arr, rows, cols, transposeArr);
    cout<<"Transpose Array is: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<transposeArr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}