
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        vector<long long> ans;
        
        for (long long i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                ans.push_back(i);

                if (n / i != i)
                    ans.push_back(n / i);
            }
        }

        sort(ans.begin(), ans.end());

        int count = 1;
        int Final_ans = 1;

        for (int i = 1; i < ans.size(); i++) {
            if (ans[i] == ans[i - 1] + 1) {
                count++;
            }
            else {
                count = 1;
            }

            Final_ans = max(Final_ans, count);
        }

        cout << Final_ans << endl;
    }
}