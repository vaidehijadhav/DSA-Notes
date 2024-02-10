#include<iostream>
#include<string>
using namespace std;

int main(){
    // // String create
    // string str;
    // // input
    // // cin >> str;
    // getline(cin, str);
    // // output
    // cout<<str<<endl;

    // cout<<"Length: "<<str.length()<<endl;
    // cout<<"isEmpty: "<<str.empty()<<endl;
    // str.push_back('A');
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str<<endl;
    // cout<<str.substr(0,5)<<endl;

    // string a = "vaidehi";
    // string b = "Vaidehi";

    // if(a.compare(b)== 0){
    //     cout<<"a and b are same strings"<<endl;
    // }else{
    //     cout<<"a and b are different strings"<<endl;
    // }

    // string x = "zbbb";
    // string y = "bbbb";

    // cout<<x.compare(y)<<endl;

    string sentence = "Hello, I'm Vaidehi";
    string target = "Vaidehii";

    // cout<<sentence.find(target)<<endl;
    // if(sentence.find(target) == string::npos){
    //     cout<<"Target not found"<<endl;
    // }

    cout<<sentence.erase(5,8)<<endl;
    return 0;
}