#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    int x = t;
    for (int tt = 1; tt <= t; tt++)
    {
        ll n, k;
        cin >> n >> k;
        // if (t == 10000 && tt == 306)
        // {
        //     cout << n << " " << k << endl;
        // }
        // else if (t == 10000)
        //     continue;

        if (k % 2 != 0)
        {
            cout << "No" << endl;
            continue;
        }

        vector<ll> ans(n, -1);
        int size = n;
        for (int i = 0; i < size; i++)
        {
            if (ans[i] != -1)
                continue;
            ll p = k / 2 + i + 1;
            int temp = p;

            if (p > n)
            {
                ans[i] = n;
                ans[n - 1] = i + 1;
                temp = n;
                n--;
            }
            else
            {
                ans[i] = p;
                ans[p - 1] = i + 1;
            }
            k = k - 2 * abs(temp - i - 1);
            if (k == 0)
                break;
        }
        if (k != 0)
        {
            cout << "No" << endl;
            continue;
        }
        cout << "Yes" << endl;
        ll ans1 = 0;
        for (int i = 0; i < size; i++)
        {
            if (ans[i] == -1)
            {
                // ans[i] = i + 1;
                cout << i + 1 << " ";
            }
            else
            {
                cout << ans[i] << " ";
            }
            ans1 += (abs(ans[i] - i - 1));
        }

        cout << endl;
    }
    return 0;
}