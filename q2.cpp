#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); 

    reverse(str.begin(), str.end());

    cout << "The reversed string is: " << str << endl;

    return 0;
}

