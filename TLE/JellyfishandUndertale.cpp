#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b,n;

        cin >> a >> b >> n;

        long long arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        long long sum = b ;

        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= a)
                sum += a - 1;
            else
                sum += arr[i];
        }

        cout << sum << endl;
    }
}