#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = right + (left - right) / 2;
        
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            return binarySearch(arr, left, mid - 1, x);
        else
            return binarySearch(arr, mid + 1, right, x);
    }
    return -1;
}

int ceilIndex(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;
    int ceil = -1;

    while (left <= right) {
        int mid =  left + (right - left) / 2;
        if (arr[mid] == target){
            return mid;
        }    
        else if (arr[mid] < target){
            left = mid + 1;
        }
        else {
            ceil = mid;
            right = mid - 1;
        }  
    }

    return ceil;
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int result = ceilIndex(arr, n, x);
    cout << "Index of the smallest element greater than or equal to " << x << " is " << result; 
    // int result = binarySearch(arr, 0, n - 1, x);
    // if (result == -1)
    //     cout << "Element not found.";
    // else
    //     cout << "Element found at index " << result << endl;
    return 0;
}