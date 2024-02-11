#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int miniTimeDiff(vector<string> &arr){
    vector<int>minutes;

    for(int i=0;i<arr.size();i++){
        string curr = arr[i];

        int hours = stoi(curr.substr(0,2));
        int min = stoi(curr.substr(3,2));
        int totalMinutes = hours*60 + min;

        minutes.push_back(totalMinutes);
    }

    sort(minutes.begin(), minutes.end());

    int mini = INT_MAX;
    int n = minutes.size();

    for(int i=0;i<n;i++){
        int diff = minutes[i+1] - minutes[i];
        mini = min(mini, diff);
    }    

        int lastDiff1 = (minutes[0]+1440)-minutes[n-1];
        int lastDiff2 = minutes[n-1] - minutes[0];
        int lastDiff = min(lastDiff1, lastDiff2);
        mini = min(mini, lastDiff);

    return mini;
}

int main(){

    vector<string>arr = {"23:59","00:00"};
    cout<<miniTimeDiff(arr)<<endl;


    return 0;
}