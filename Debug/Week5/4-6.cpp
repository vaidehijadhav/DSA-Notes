// #include<iostream>
// using namespace std;

// string isPalindrome(string S)
// {
// 	int N = S.length();
//     for (int i = 0; i < (N/2); i++) {
//         cout<<"i is "<< i << " char is " << S[i] << " & "<<" N-i-1 is "<< N-i-1 << " char " <<S[N-i-1] <<endl;
//         cout<<"N/2 is "<<N/2<<endl; 
//         if (S[i] != S[N-i-1]) {
//             return "No";
//         }
//     }
//     return "Yes";
// }

// int main(){
//     string input;
//     cout << "Enter a string: ";
//     cin >> input; // Take input from the user
//     string result = isPalindrome(input); // Call the isPalindrome function
//     cout << result << endl; // Output the result
//     return 0;
// }


#include <iostream>  
using namespace std;  

void reverseString(char input[],int n,int start){
    for(int i=start,j=n-1+start;i<j;i++,j--){
        int temp = input[i];
        input[i] = input[j];
        input[j] = temp;
    }
}

void reverseEachWord(char input[]) {
    int start=0,count=1,i=0;
    while(input[i]!=0){
        i++;
        count++;
        if((input[i]==' ' || input[i] == '\0')){
            reverseString(input,count-1,start);
            start = i+1;
            count = 0;
        }
    }
}

int main() {  
    // char char_array[] = {'L','A','K','S','H','A','Y'};  
    // int array_size = sizeof(char_array)/sizeof(char);  
    // string j = "";  
    // int i;  
    // for(i = 0; i < array_size; i++) {    
    //     j = j + char_array[i];  
    // }  
    // cout << j <<endl;  

    char char_array[] = "Hello World";
    cout << "Original string: " << char_array << endl;
    reverseEachWord(char_array);
    cout << "String after reversing each word: " << char_array << endl;
}