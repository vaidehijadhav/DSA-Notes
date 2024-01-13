#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //solid diamond
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<row+1;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row;col++){
    //         cout<<" ";
    //     }
    //     for(int col=0;col<n-row;col++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    //hallow diamond
    // for(int row=0;row<n;row++){
    //     //for spaces
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }

    //     for(int col=0;col<2*row+1;col++){
    //         //if first charcter or last charcater
    //         if(col==0  || col==2*row){
    //             cout<<"*" ;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for(int row=0;row<n;row++){
    //     //for spaces
    //     for(int col=0;col<row;col++){
    //         cout<<" ";
    //     }

    //     //for star
    //     for(int col=0;col<2*n-2*row-1;col++){
    //         if(col == 0 || col==2*n-2*row-2){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //flipped solid diamond
    for(int row=0;row<n;row++){
        //half pyramid
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        //space wala full pyramid
        for(int col=0;col<2*row+1;col++){
            cout<<" ";
        }
        //half pyramid
        for(int col=0;col<n-row;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int row=0;row<n;row++){
        //half pyramid
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        //space wala full pyramid
        for(int col=0;col<2*n-2*row-1;col++){
            cout<<" ";
        }
        //half pyramid
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    
    return 0;
}