#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

bool cmp(char first, char second){
    // return first<second;    //Ascending order
    return first>second;    //Descending order
}

bool custom(int a, int b){
    return a>b;  //Custom function to sort array of integers in descending order.
}

int main(){
    // string s= "vaidehi";
    // sort(s.begin(), s.end(),cmp);
    // cout<<s<<endl;

    vector<int> v={1,4,3,6,8};
    sort(v.begin(), v.end(), custom);

    for(auto i:v){
        cout<<i<<" ";
    }

    
    return 0;
}
