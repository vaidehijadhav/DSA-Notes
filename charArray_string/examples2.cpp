#include<iostream>
#include<string>
using namespace std;

string removeAdjElement(string &s){
    string ans="";
    int i = 0;

    while (i<s.length()){
        if(ans.length()>0){
            if(ans[ans.length()-1] == s[i]){
                ans.pop_back();
            }
            else{
                ans.push_back(s[i]);
            }
        }
        else{
            ans.push_back(s[i]);
        }
        i++;
    }
    return ans;
}

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin,s);

    // remove all occurences of adjacent elements
    // cout << "The string after removing adjacent elements: " << removeAdjElement(s) << endl;
    return 0;
}