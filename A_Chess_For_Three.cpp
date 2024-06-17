#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p1, p2, p3;
        int ans = 0;
        vector<int> vec(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> vec[i];
        }

        while (true)
        {
            if (vec[0] == 0 && vec[1] == 0)
            {
                break;
            }
            else
            {
                vec[2]--;
                vec[1]--;
                sort(vec.begin(), vec.end());
                ans++;
            }
        }
        if (vec[2] % 2)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}