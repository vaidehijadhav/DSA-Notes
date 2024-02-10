#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //solid square
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //hallow square
    // for(int row=0;row<n;row++){
    //     if(row==0 || row== n-1){
    //         for(int col=0;col<n;col++){
    //             cout<<"* ";
    //         }
    //     }
    //     else{
    //         cout<<"* ";
    //         for(int i=0;i<n-2;i++){
    //             cout<<"  ";
    //         }
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // inverted half pyramid
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         if(row==0||row==n-1||col==0 || col==n-row-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //full pyramid
    // for(int row=0;row<n;row++){
    //     //spaces
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }
    //     //stars
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //inverted full pyramid
    for(int row=0;row<n;row++){
        //space
        for(int col=0;col<row;col++){
            cout<<" ";
        }
        //star
        for(int col=0;col<n-row;col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}
