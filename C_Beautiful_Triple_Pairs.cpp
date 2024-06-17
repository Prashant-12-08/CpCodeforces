#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    fastio();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> vec(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        vector<ll> node(3);
        map<vector<ll>, map<ll, ll>> mpp;
        for (ll i = 0; i < n - 2; i++)
        {
            mpp[{vec[i], vec[i + 1], 3}][vec[i + 2]]++;
            mpp[{vec[i], vec[i + 2], 2}][vec[i + 1]]++;
            mpp[{vec[i + 1], vec[i + 2], 1}][vec[i]]++;
        }

        ll ans = 0;
        for (ll i = 0; i < n - 2; i++)
        {
            map<ll, ll> temp = mpp[{vec[i], vec[i + 1], 3}];
            for (auto it : temp)
            {
                if (vec[i + 2] != it.first)
                {
                    ans += it.second;
                }
            }
            map<ll, ll> temp2 = mpp[{vec[i], vec[i + 2], 2}];
            for (auto it : temp2)
            {
                if (vec[i + 1] != it.first)
                {
                    ans += it.second;
                }
            }
            map<ll, ll> temp3 = mpp[{vec[i + 1], vec[i + 2], 1}];
            for (auto it : temp3)
            {
                if (vec[i] != it.first)
                {
                    ans += it.second;
                }
            }

            // for (ll j = 0; j < 3; j++)
            // {
            //     map<ll, int> temp = mpp[{vec[i + j], vec[i + j + 1]}]
            // }
        }
        cout << ans / 2 << endl;
    }
}