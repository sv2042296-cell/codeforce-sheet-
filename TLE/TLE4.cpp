// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while ((t--))
//     {
//         int a, b, xk, yk, xq, yq;
//         cin >> a >> b >> xk >> yk >> xq >> yq;
//         int count = 0;
//         int L1 = sqrt((a - xk) * (a - xk) + (b - yk) * (b - yk));
//         int L2 = sqrt((a - xq) * (a - xq) + (b - yq) * (b - yq));
//         if (L1 == L2)
//             count++;
//         int L3 = sqrt((b - xk) * (b - xk) + (a - yk) * (a - yk));
//         int L4 = sqrt((b - xq) * (b - xq) + (a - yq) * (a - yq));
//         if (L4 == L3)
//             count++;
//         cout << count;
//     }
// }