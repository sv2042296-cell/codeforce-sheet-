#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;

        vector<long long> arr(n); 

        for(int i = 0; i < arr.size(); i++){
            cin >> arr[i];
        }

        vector<long long> a_sort = arr;
        sort(a_sort.begin(), a_sort.end());

        if(k > 1 || arr == a_sort){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}