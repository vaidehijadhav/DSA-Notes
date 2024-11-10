// #include <iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void reverseWords(string s)
// {
//     vector<string> tmp;
//     string str = "";
//     for (int i = 0; s[i] <s.length(); i++) {
//         if (s[i] == ' ') {
//             tmp.push_back(str);
//             str = "";
//         }
//         else
//             str += s[i];
//     }
//     tmp.push_back(str);

//     // reverse(tmp.begin(), tmp.end());

//     // for(const string& word : tmp){
//     //     cout<< word << " ";
//     // }
//     // cout<<endl;
// }

// int main(){
//     string input = "Hello World";
//     reverseWords(input);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
 
// char maxOccurring(char* str)
// {
//     int count[256] = {0};
//     int max = INT_MIN;
//     char answer;
 
//     for (int i = 0; str[i] != '\0'; i++) {
//         count[str[i]]++;
//         if (max < count[str[i]]) {
//             max = count[str[i]];
//             answer= str[i];
//         }
//     }
//     return answer;
// }

#include <bits/stdc++.h>
using namespace std;

char *removeDuplicate(char str[], int n) {
  // str is character array and n is the lenght of the character array
	int index = 0;
	for (int i=0; i<n; i++) {
		int j;
		for (j=0; j<i; j++)
			if (str[i] == str[j])
				break;
        if(i == j) str[index++] = str[j];
	}

	str[index] ='\0';	
	return str;
}

int main()
{
    char str[] = "aabbccd";
    int n = strlen(str);
    cout << removeDuplicate(str, n)<< endl;
}