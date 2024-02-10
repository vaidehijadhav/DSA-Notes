<<<<<<< HEAD
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //fancy* pattern
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<row+1;
    //         if(col !=row){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<n-row;
    //         if(col !=n-row-1){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    //Palindrome Pyramid
    // for(int row=0;row<n;row++){
    //     int col;
    //     for(col=0;col<row+1;col++){
    //         cout<<col+1;
    //     }
    //     col=col-1;
    //     for(;col>=1;col--){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }

    // Alphabet palidrome pyramid
    for(int row=0;row<n;row++){
        int col;
        for(int col=0;col<row+1;col++){
            int ans=col+1;
            char ch = ans + 'A'-1;
            cout<<ch;
        }
        for(int col=row;col>=1;col--){
            int ans=col;
            char ch=col+'A'-1;
            cout<<ch;
        }
        cout<<endl;
    }

    return 0;
=======
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //fancy* pattern
    // for(int row=0;row<n;row++){
    //     for(int col=0;col<row+1;col++){
    //         cout<<row+1;
    //         if(col !=row){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for(int row=0;row<n;row++){
    //     for(int col=0;col<n-row;col++){
    //         cout<<n-row;
    //         if(col !=n-row-1){
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    //Palindrome Pyramid
    // for(int row=0;row<n;row++){
    //     int col;
    //     for(col=0;col<row+1;col++){
    //         cout<<col+1;
    //     }
    //     col=col-1;
    //     for(;col>=1;col--){
    //         cout<<col;
    //     }
    //     cout<<endl;
    // }

    // Alphabet palidrome pyramid
    for(int row=0;row<n;row++){
        int col;
        for(int col=0;col<row+1;col++){
            int ans=col+1;
            char ch = ans + 'A'-1;
            cout<<ch;
        }
        for(int col=row;col>=1;col--){
            int ans=col;
            char ch=col+'A'-1;
            cout<<ch;
        }
        cout<<endl;
    }

    return 0;
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
}