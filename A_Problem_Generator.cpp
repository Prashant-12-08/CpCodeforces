#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        map<char, int> mpp;
        int ans = 0;
        for (int i = 65; i <= 71; i++)
        {
            mpp[char(i)] = 0;
        }
        for (auto it : s)
        {
            mpp[it]++;
        }
        for (auto it : mpp)
        {
            if (it.second < m)
            {
                ans += (m - it.second);
            }
        }
        cout << ans << endl;
    }
    return 0;
}