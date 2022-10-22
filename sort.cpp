#include <bits/stdc++.h>
using namespace std;

int main()
{

    // checks if '9' is a digit
    vector<int> ar = {5, 6, 1, 3, 10};
    sort(ar.begin(), ar.end());
    for (int i = 0; i < ar.size(); i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}
