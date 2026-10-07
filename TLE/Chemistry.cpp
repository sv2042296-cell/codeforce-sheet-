
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        int count = 0;

        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        for(auto it : mp)
        {
            if(it.second == 1 || it.second % 2 != 0)
            {
                count++;
            }
        }

        int check = count - k;

        if(check > 1)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}