#include<iostream>
using namespace std;

bool isAlpha(char ch){
    return (ch>='a' && ch<='z') || (ch>='A' && ch<='Z');
}

string reverseOnlyLetters(string s){
    int i = 0;
    int j = s.size() - 1;

    while(i < j){
        if(!isAlpha(s[i])){
            i++;
        }
        else if(!isAlpha(s[j])){
            j--;
        }
        else{
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    return s;

}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin >> s;

    string str = reverseOnlyLetters(s);
    cout<<"Reverse String: "<< str <<endl;
    return 0;
}