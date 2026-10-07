
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;

        long long minimum = k * (k + 1) / 2;

        long long maximum = n * (n + 1) / 2
                          - (n - k) * (n - k + 1) / 2;

        if (x >= minimum && x <= maximum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}