#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> ans(2);
        int pos = 0;
        int neg = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[i])
            {
                a[i] == 1 ? pos++ : 0;
                a[i] == -1 ? neg++ : 0;
            }
            else
            {
                a[i] == 1 ? ans[0]++ : 0;
                b[i] == 1 ? ans[1]++ : 0;
            }
        }
        while (pos)
        {
            if (ans[0] >= ans[1])
                ans[1]++;
            else
                ans[0]++;
            pos--;
        }
        while (neg)
        {
            if (ans[0] >= ans[1])
                ans[0]--;
            else
                ans[1]--;
            neg--;
        }
        cout << min(ans[0], ans[1]) << endl;
    }
    return 0;
}