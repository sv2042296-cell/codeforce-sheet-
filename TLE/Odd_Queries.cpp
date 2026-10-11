#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> arr(n);
        vector<long long> prefix(n + 1, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            prefix[i + 1] = prefix[i] + arr[i];
        }

        long long totalSum = prefix[n];

        for (int i = 0; i < q; i++)
        {
            int l, r, k;
            cin >> l >> r >> k;

            long long rangeSum = prefix[r] - prefix[l - 1];

            long long newSum = totalSum - rangeSum + 1LL * (r - l + 1) * k;

            if (newSum % 2 == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}