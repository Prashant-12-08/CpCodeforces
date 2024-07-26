// // #include <bits/stdc++.h>
// // using namespace std;
// // #define ll long long

// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     for (int tt = 1; tt <= t; tt++)
// //     {
// //         ll n;
// //         cin >> n;
// //         ll k = n;
// //         vector<ll> vec;
// //         vector<ll> ans;

// //         if (t == 1000 && tt == 102)
// //         {
// //             cout << n << " ";
// //         }
// //         else if (t == 1000)
// //             continue;
// //         while (k != 0)
// //         {
// //             vec.push_back(k % 2);
// //             k = k / 2;
// //         }

// //         int lastInd = -1;
// //         ll lastVal = n;
// //         int size = vec.size();
// //         ans.push_back(n);
// //         for (int i = 0; i < size; i++)
// //         {
// //             ll x = lastVal;
// //             while (i < size && vec[i] != 1)
// //             {
// //                 i++;
// //             }
// //             if (lastInd != -1)
// //             {
// //                 x = x + 1LL * pow(2, lastInd);
// //             }
// //             x = x - 1LL * pow(2, i);
// //             cout << lastVal << " " << i << " " << lastInd << endl;
// //             lastInd = i;
// //             if (x <= 0)
// //                 break;
// //             ans.push_back(x);
// //             lastVal = x;
// //             // cout << (ans[ans.size() - 2] | ans.back()) << endl;
// //         }
// //         cout << ans.size() << endl;
// //         reverse(ans.begin(), ans.end());
// //         cout << "or" << endl;

// //         for (auto it : ans)
// //         {
// //             cout << it << " ";
// //         }
// //         cout << endl;
// //     }
// //     return 0;
// // }

// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// int main()
// {
//     int t;
//     cin >> t;
//     for (int tt = 1; tt <= t; tt++)
//     {
//         ll n;
//         cin >> n;
//         ll k = n;
//         vector<ll> vec;
//         vector<ll> ans;

//         // if (t == 1000 && tt == 102)
//         // {
//         //     cout << n << " ";
//         // }
//         // else if (t == 1000)
//         //     continue;

//         while (k != 0)
//         {
//             vec.push_back(k % 2);
//             k = k / 2;
//         }

//         int lastInd = -1;
//         ll lastVal = n;
//         int size = vec.size();
//         ans.push_back(n);

//         for (int i = 0; i < size; i++)
//         {
//             ll x = lastVal;
//             while (i < size && vec[i] != 1)
//             {
//                 i++;
//             }
//             if (lastInd != -1)
//             {
//                 x = x + (1LL << lastInd); // Use bitwise operation
//             }
//             x = x - (1LL << i); // Use bitwise operation
//             lastInd = i;
//             if (x <= 0)
//                 break;
//             ans.push_back(x); // Line 44
//             lastVal = x;
//         }

//         cout << ans.size() << endl;
//         reverse(ans.begin(), ans.end());

//         for (auto it : ans)
//         {
//             cout << it << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> ans;
        ans.push_back(n);
        for (ll i = 0; i < 62; i++)
        {
            ll x = 1LL << i;
            if ((x & n) == x && x != n)
            {
                ans.push_back(n - x);
            }
        }

        cout << ans.size() << endl;
        reverse(ans.begin(), ans.end());
        for (auto it : ans)
            cout << it << " ";
        cout << endl;
    }
}