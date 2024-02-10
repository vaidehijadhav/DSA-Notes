<<<<<<< HEAD
#include<iostream>
using namespace std;

int findSqrt(int n){
    int target = n;
    int s = 0;
    int e =n;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(mid*mid == target){
            return mid;
        }

        if(mid*mid > target){
            // search in left
            e = mid -1;
        }
        else{
            //store the ans
            ans = mid;
            // search in right
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return ans ;
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    int ans = findSqrt(n);
    cout<<"Square root of "<<n<<" is "<<ans<<endl;

    int precision;
    cout<<"Enter the number of floating digit in precision: "<<endl;
    cin>>precision;

    double finalAns = ans;

    double step =0.1;
    for(int i=0;i<precision;i++){
        for(double j = finalAns; j*j<=n; j=j+step){
            finalAns = j;
        }
        step = step/10;
    }

    cout<<"Square root of "<<n<<" is "<<finalAns<<endl;

    return 0;
}
=======
#include<iostream>
using namespace std;

int findSqrt(int n){
    int target = n;
    int s = 0;
    int e =n;
    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(mid*mid == target){
            return mid;
        }

        if(mid*mid > target){
            // search in left
            e = mid -1;
        }
        else{
            //store the ans
            ans = mid;
            // search in right
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return ans ;
}

int main(){
    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;

    int ans = findSqrt(n);
    cout<<"Square root of "<<n<<" is "<<ans<<endl;

    int precision;
    cout<<"Enter the number of floating digit in precision: "<<endl;
    cin>>precision;

    double finalAns = ans;

    double step =0.1;
    for(int i=0;i<precision;i++){
        for(double j = finalAns; j*j<=n; j=j+step){
            finalAns = j;
        }
        step = step/10;
    }

    cout<<"Square root of "<<n<<" is "<<finalAns<<endl;

    return 0;
}
>>>>>>> 7c28d0fd0a0978ede2f8675bf2beb28af517ee45
