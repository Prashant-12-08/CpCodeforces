#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    int ans = 0;
    int prev = 0;
    for (int tt = 1; tt <= t; tt++)
    {
        ll n, c;
        cin >> n >> c;
        vector<ll> vec(n);
        vector<ll> preMax(n);
        vector<ll> suffMax(n);
        vector<ll> pre(n);
        ans += n;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        };

        // if (t == 19525 && ans >= 235)
        // {
        //     cout << n << " " << c << endl;
        //     for (auto it : vec)
        //     {
        //         cout << it << " ";
        //     }
        //     cout << endl;
        // }
        // else if (t == 19525)
        //     continue;

        vec[0] += c;
        ll maxi = INT_MIN;
        int ind = n;
        for (int i = n - 1; i >= 0; i--)
        {
            if (vec[i] >= maxi)
            {
                ind = i;
                maxi = vec[i];
            }
            suffMax[i] = ind;
        }
        maxi = INT_MIN;
        ind = -1;
        pre[0] = vec[0];
        for (int i = 0; i < n; i++)
        {
            if (vec[i] > maxi)
            {
                ind = i;
                maxi = vec[i];
            }
            preMax[i] = ind;
            if (i == 0)
                continue;
            pre[i] = pre[i - 1] + vec[i];
        };

        for (int i = 0; i < n; i++)
        {
            if (i > preMax[i])
            {
                if (pre[i] >= vec[suffMax[i]])
                    cout << i << " ";
                else
                {
                    cout << i + 1 << " ";
                }
            }
            else
            {
                if (vec[i] >= vec[suffMax[i]])
                {
                    cout << 0 << " ";
                }
                else if (pre[i] >= vec[suffMax[i]])
                {
                    cout << i << " ";
                }
                else
                {
                    cout << i + 1 << " ";
                }
            }
        }
        cout << endl;
        prev = ans;
    }
    return 0;
}
