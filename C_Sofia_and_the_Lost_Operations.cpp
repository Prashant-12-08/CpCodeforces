#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> vec1(n);
        vector<ll> vec2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> vec1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> vec2[i];
        }
        int m;
        cin >> m;
        vector<ll> b(m);
        map<ll, ll> mpp;
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            mpp[b[i]]++;
        }
        ll last = b[m - 1];
        int flag = false;
        for (auto it : vec2)
        {
            if (it == last)
            {
                flag = true;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
            continue;
        }
        int ind = false;
        for (int i = 0; i < n; i++)
        {
            if (vec1[i] != vec2[i])
            {
                if (mpp.count(vec2[i]) > 0 && mpp[vec2[i]] > 0)
                {
                    mpp[vec2[i]]--;
                }
                else
                {
                    ind = true;
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        if (ind)
            continue;
        cout << "YES" << endl;
    }
}