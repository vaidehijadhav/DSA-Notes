#include<iostream>
using namespace std;

string reorganizeString(string s) {
    int i = 0;
    string ans = "";

    while(i < s.size()){
        if(s[i] == s[i+1]){
            swap(s[i+1], s[i+2]);
            i++;
        }
        
        if(s[i] == s[i+1]){
            break;
        }

        ans.push_back(s[i]);
    }

    return ans;
}

int main(){
    string s;
    cin >> s;
    if(reorganizeString(s).empty()){
        cout << "-1";
    }
    else{
        cout << reorganizeString(s);
    }
}