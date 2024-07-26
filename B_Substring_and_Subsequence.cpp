#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int cnt = 0;
        int n = s1.size();
        int m = s2.size();
        // if (t == 1000 && tt == 37)
        // {
        //     cout << "Case #" << tt << ": " << s1 << " " << s2 << " ";
        // }
        // else if (t == 1000)
        //     continue;

        int mx = 0;
        for (int i = 0; i < m; i++)
        {
            char nxt = s2[i];
            int j = i;
            int mx1 = 0;
            for (int k = 0; k < n; k++)
            {
                if (nxt == s1[k])
                {
                    mx1++;
                    j++;
                    mx = max(mx1, mx);
                    if (j < m)
                    {
                        nxt = s2[j];
                    }
                    else
                        break;
                }
            }
        }
        cout << n + m - mx << endl;
    }
    return 0;
}