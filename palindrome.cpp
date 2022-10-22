#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s = "hello";
    string t = s;
    reverse(t.begin(), t.end());
    if (s == t)
        cout << "Palindrome";
    else
        cout << "Not palindrome";

    return 0;
}
