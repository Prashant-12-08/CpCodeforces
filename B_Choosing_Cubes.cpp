#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, f, k;
        cin >> n >> f >> k;
        vector<pair<int, int>> vec;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            vec.push_back({x, i});
        }
        int val = vec[f - 1].first;
        sort(vec.begin(), vec.end());
        reverse(vec.begin(), vec.end());

        int last = -1;
        int first = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if (vec[i].first == val)
            {
                last = max(i, last);
                first = min(i, first);
            }
        }
        k--;
        if (last <= k)
        {
            cout << "YES" << endl;
        }
        else if (first > k)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "MAYBE" << endl;
        }
    }
    return 0;
}