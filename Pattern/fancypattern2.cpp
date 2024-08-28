#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int c = 1;
    //upperpart
    for(int i = 0; i<n;i++){
        for(int j =0; j<i+1;j++){
            cout<<c;
            c++;
        }
        cout<<endl;
    }
    
    // lower part
    int start = c-n;
    for(int i= 0 ; i<n;i++){
        int k = start;
        for(int j = 0; j<=n-i-1;j++){
            cout<<k;
            k++;
        }
        start = start - (n-i-1);
        cout<<endl;
    }

    return 0;
}