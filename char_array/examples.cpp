#include<iostream>
#include<string.h>
using namespace std;

void replaceSpaces(char sentences[]){
    int i = 0;
    int n = strlen(sentences);

    for(int i=0;i<n;i++){
        if(sentences[i] == ' '){
            sentences[i] = '@';
        }
    }
}

bool checkPalindrome(char word[]){
    int i = 0;
    int n = strlen(word);
    int j = n-1;

    while(i<=j){
        if(word[i]!=word[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
}

void convertUpparcase(char arr[]){
    int n=strlen(arr);
   
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-'a'+'A';
    }
}

void convertLowercase(char arr[]){
    int n=strlen(arr);
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-'A'+'a';
    }
}

int main(){
    // char sentences[100];
    // cin.getline(sentences,100);

    // replaceSpaces(sentences);
    // cout<<"Printing sentence: "<<endl<<sentences<<endl;

    // char word[100]="racecar";
    // cout<< "Palindrome check: "<<checkPalindrome(word)<<endl;

    // char arr[100]="vaidehi";
    // convertUpparcase(arr);
    // cout<<arr<<endl;

    char arr[100]="VAIDEHI";
    convertLowercase(arr);
    cout<<arr<<endl;
    return 0;
}