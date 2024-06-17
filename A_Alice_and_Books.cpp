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
        vector<int> vec(n, 0);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> vec[i];
        }
        int maxi = *max_element(vec.begin(), vec.end());
        if (vec[n - 1] == maxi)
        {
            int second_maxi = *max_element(vec.begin(), vec.end() - 1);
            ans = maxi + second_maxi;
        }
        else
        {
            ans = vec[n - 1] + maxi;
        }
        cout << ans << endl;
    }
    return 0;
}