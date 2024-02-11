#include<iostream>
#include<string>
using namespace std;

int expandAroundIndex(string s, int i, int j){
    int count = 0;
    while (i>=0 && j<s.length() && s[i] == s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;
    
}

int countSubstrings(string s){
    int count = 0;
    int n = s.length();

    for(int i=0;i<n;i++){
        // odd
        int oddKaCount = expandAroundIndex(s, i,i);
        count = count+ oddKaCount;

        // even
        int evenKaCount = expandAroundIndex(s, i, i+1);
        count = count + evenKaCount;
    }
    return count;
}

int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin,s);

    cout<<"The number of palindromic substrings: "<<countSubstrings(s)<<endl;


    return 0;
}