#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string s, int i, int j){
    while(i<=j){
        if(s[i] != s[j])
        return false;
        i++;
        j--;
    }
    return true;
}

bool validPalindrome(string s){
    int i = 0;
    int j = s.length()-1;

    while(i<=j){
        if(s[i] != s[j]){
            // ek barr i ko remove, ek baar j ko remove
            return checkPalindrome(s, i+1, j) || checkPalindrome(s, i, j-1);
        }
        else{
            // s[i]==s[]
            i++;
            j--;
        }
    }
    return true;
}

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin,s);

    cout<<"The string after removing adjacent elements: "<<validPalindrome(s)<<endl;  

    return 0;
}