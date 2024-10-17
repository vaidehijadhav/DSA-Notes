#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[] = {22, 65, 1, 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    // selectionSort(arr, n);
    bubbleSort(arr, n);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    return 0;

}