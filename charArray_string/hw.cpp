#include <iostream>
#include <string>
using namespace std;

int main()
{
    // difference between char array and string
    char arr[10];
    arr[0] = 'v';
    arr[1] = 'a';
    arr[2] = '\0';
    arr[3] = 'd';
    arr[4] = 'e';
    arr[5] = '\0';
    arr[6] = 'i';
    cout << arr << endl;

    string str;
    str.push_back('v');
    str.push_back('a');
    str.push_back('\0');
    str.push_back('d');
    str.push_back('e');
    str.push_back('\0');
    str.push_back('i');

    cout << str << endl;
    return 0;
}
