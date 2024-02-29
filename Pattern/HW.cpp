#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // hallow square
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n;col++){
    //         if(col==0 || col==n-1 || row==0 || row==n-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Hallow full pyramid
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<"  ";
    //     }
    //     for(int col=0;col<2*row+1;col++){
    //         if(col==0 || col==2*row || row==n-1 ){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //     cout<<endl;
    // }

    //Numeric Hallow Half Pyramid
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         if(row == 0 || row==n-1 || col==0 || col==row){
    //             cout<<col+1;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // Numeric Hallow Inverted Half Pyramid
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         if(row==0 || col==0 || col==n-row-1){
    //             cout<<row+col+1;
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }


    // Numeric Palindrome Equilateral Pyramid
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row-1;col++){
    //         cout<<" ";
    //     }

    //     int c=1;
    //     for(int col=0;col<row+1;col++){
    //         cout<<c;
    //         c++;
    //     }
    //     for(int col=row;col>=1;col--){
    //         cout<<c;
    //         c++;
    //     }
    //     cout<<endl;
    // }

    // solid Half Pyramid
    for(int row=0;row<n;row++){
        for(int col=0;col<row+1;col++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int row=0;row<n;row++){
        for(int col=0;col<n-row-1;col++){
            cout<<"*";
        }
        cout<<endl;
    }


    // Butterfly Pattern
    // for(int row=0;row<n;row++){
    //     //half pyramid
    //     for(int col=0;col<row+1;col++){
    //         cout<<"*";
    //     }

    //     //space full pyramid
    //     for(int col=0;col<2*n-2*row-1;col++){
    //         cout<<" ";
    //     }

    //     //right side half pyramid
    //     for(int col=0;col<row+1;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // for(int row=0;row<n;row++){
    //     //inverted half pyramid
    //     for(int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }

    //     //space full pyramid
    //     for(int col=0;col<2*row+1;col++){
    //         cout<<" ";
    //     }

    //     //right side inverted half pyramid
    //     for(int col=0;col<n-row;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    return 0;
}