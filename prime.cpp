#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 1000;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "NOT Prime\n";
            return;
        }
    }
    cout << "Prime!!";
    return 0;
}
