#include <bits/stdc++.h>
using namespace std;

int main()
{

    // checks if '9' is a digit
    vector<int> ar = {5, 6, 1, 3, 10};
    int x = 5, ind = -1;
    for (int i = 0; i < ar.size(); i++)
    {
        if (ar[i] == x)
        {
            ind = i;
        }
    }

    if (ind != -1)
        cout << "found!!";
    else
        cout << "NOt found!!";

    return 0;
}
