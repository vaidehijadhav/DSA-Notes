// Q.1 This program declares an integer array of size 5 and initializes it with values 1, 2, 3, 4, and 5. Then, it attempts to print the elements of the array using a loop. However, there's an error in the loop that you need to debug. Can you find it and fix it?
// #include <iostream>
// using namespace std;

// int main() {
//    int arr[5] = {1, 2, 3, 4, 5};
//    for(int i = 0; i < 5; i++) {
//       cout << arr[i] << " ";
//    }  
//    return 0;
// }

// Q.2
// #include <iostream>
// #include <vector>

// using namespace std;

// int majorityElement(vector<int>& nums) {
//     int candidate, count = 0;
//     for (int i = 0; i < nums.size(); i++) {
//         if (count == 0) {
//             candidate = nums[i];
//         }
//         if (nums[i] == candidate) {
//             count++;
//         } else {
//             count--;
//         }
//     }
    
//     count = 0;
//     for (int i = 0; i < nums.size(); i++){
//         if(candidate = nums[i]){
//             count++;
//         }
//     }
//     if(count > nums.size()/2){
//         return candidate;
//     }
//     else{
//         return -1 ;
//     }
// }

// int main() {
//     vector<int> nums = {1, 2, 3, 2, 2, 4, 2};
//     cout << "The majority element is: " << majorityElement(nums) << endl;
//     return 0;
// }

// Q.3
#include<iostream>
using namespace std;
void moveNegative(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        while(arr[i]<0 && i<j){ // swap when a positive element is encountered
            i++;
        }
        while(arr[j]>0 && i<j){ // swap when a negative element is encountered
            j--;
        }
        if(i<j){
            swap(arr[i], arr[j]); // swap the elements
        }
        
    }
}
int main(){
    int n = 5;
    int arr[n] = {2, -3, -1, 5, -4};
    moveNegative(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}