<<<<<<< HEAD
#include  <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // Fancy Pattern 1
    // for(int row=0;row<n;row++){
    //     //star
    //     for(int col=0;col<n+3-row;col++){
    //         cout<<"*";
    //     }

    //     //numeric full pyramid
    //     for(int col=0;col<2*row+1;col++){
    //         if(col==n+3-row){
    //             cout<<row+1;
    //             col=+2;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //         cout<<endl;   
    //     }

    //     //star
    //     for(int col=0;col<n+3-row;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // numeric hallow pyramid
    for(int row=0;row<n;row++){
        // spaces
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }

        // pyramid
        int start=1;
        for(int col=0;col<2*row+1;col++){
            //first row or last row
            if(row==0 || row==n-1){
                if(col%2==0){
                    cout<<start;
                    start=start+1;
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(col==0){
                    cout<<1;
                }
                else if(col==2*row){
                    cout<<row+1;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }

    // numeric pattern
//     int c=1;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<=row;col++){
//             cout<<c;
//             c++;
//         }
//         cout<<endl;
//     }
    // return 0;
=======
#include  <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    // Fancy Pattern 1
    // for(int row=0;row<n;row++){
    //     //star
    //     for(int col=0;col<n+3-row;col++){
    //         cout<<"*";
    //     }

    //     //numeric full pyramid
    //     for(int col=0;col<2*row+1;col++){
    //         if(col==n+3-row){
    //             cout<<row+1;
    //             col=+2;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //         cout<<endl;   
    //     }

    //     //star
    //     for(int col=0;col<n+3-row;col++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }


    // numeric hallow pyramid
    for(int row=0;row<n;row++){
        // spaces
        for(int col=0;col<n-row-1;col++){
            cout<<" ";
        }

        // pyramid
        int start=1;
        for(int col=0;col<2*row+1;col++){
            //first row or last row
            if(row==0 || row==n-1){
                if(col%2==0){
                    cout<<start;
                    start=start+1;
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(col==0){
                    cout<<1;
                }
                else if(col==2*row){
                    cout<<row+1;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }

    // numeric pattern
//     int c=1;
//     for(int row=0;row<n;row++){
//         for(int col=0;col<=row;col++){
//             cout<<c;
//             c++;
//         }
//         cout<<endl;
//     }
    // return 0;
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
}