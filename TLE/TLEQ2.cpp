#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x;
        cin >> n >> x;

        vector<int> arr(n);

        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int Check_2;
        int maxL = arr[0];

        for(int i = 1; i < n; i++)
        {
            Check_2 = arr[i] - arr[i - 1];
            maxL = max(Check_2, maxL);
        }

        int Check = 2 * (x - arr[n - 1]);
        maxL = max(Check, maxL);

        cout << maxL << endl;   // ← yahan endl
    }
}