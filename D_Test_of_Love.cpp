#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        int count = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            s[i] == 'L' ? count = 0 : count++;
            if (count >= m)
            {
                if (s[i] == 'W')
                {
                    if (k <= 0)
                    {
                        flag = true;
                        break;
                    }
                    k--;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}