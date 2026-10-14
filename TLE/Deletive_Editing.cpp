#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin >> n;

while (n--)
{
    string s, t;
    cin >> s >> t;

    unordered_map<char, int> mp_t;

    for (char c : t)
        mp_t[c]++;

    string ans = "";

    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (mp_t[s[i]] > 0)
        {
            ans += s[i];
            mp_t[s[i]]--;
        }
    }

    reverse(ans.begin(), ans.end());

    if (ans == t)
        cout << "YES\n";
    else
        cout << "NO\n";
}

}
