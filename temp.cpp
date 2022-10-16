#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
#define int long long
using namespace __gnu_pbds;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order= Element at ith position, order_of_key= No of Values less than X
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pair<int, int>> vpi;
typedef vector<vector<int>> vvi;
const int INF = 4e18;

vi prime;
void Sieve(int n) {
    prime.resize(n + 1, true);

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
}

bool isPalindrome(string &s)
{
    string t = s;
    reverse(t.begin(), t.end());
    return t == s;
}
int ceil(int a, int b)
{
    int x = a / b;
    if (x * b != a)
        return x + 1;
    return x;
}
int NoOfPrimeFactors(int n) {
    int cnt = 0;
    if (n % 2 == 0) {
        cnt++;
    }
    while (n % 2 == 0) {
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i++) {
        if (n % i == 0) {
            cnt++;
        }
        while (n % i == 0) {
            n /= i;
        }
    }
    if (n > 2) {
        cnt++;
    }
    return cnt;
}
int mod = 1000000007;

ll modpow(ll x, ll n, int m = mod)
{
    if (x == 0 && n == 0)
        return 0;
    ll res = 1;
    while (n > 0)
    {
        if (n % 2)
            res = (res * x) % m;
        x = (x * x) % m;
        n /= 2;
    }
    return res;
}

int gcdExtended(int a, int b, int *x, int *y);

int modInverse(int b, int m) {
    int x, y;
    int g = gcdExtended(b, m, &x, &y);
    if (g != 1)
        return -1;
    return (x % m + m) % m;
}

int modDivide(int a, int b, int m = mod) {
    a = a % m;
    int inv = modInverse(b, m);
    return (inv * a) % m;
}

int gcdExtended(int a, int b, int *x, int *y) {
    if (a == 0) {
        *x = 0, *y = 1;
        return b;
    }
    int x1, y1;
    int gcd = gcdExtended(b % a, a, &x1, &y1);
    *x = y1 - (b / a) * x1;
    *y = x1;
    return gcd;
}

void solve()
{

}

int32_t main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
// cin >> t;
    int i = 1;
    while (t--)
    {
        cout << "Case #" << i << ": ";
        solve();
        i++;
    }
    return 0;
}