#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll ans = 1ll * 0;
        if (a >= b)
        {
            ans = (1ll * n) * (1ll * a);
        }
        else
        {
            ll last = b + 1 - n;
            if (last > a)
            {
                ans = ((b * (b + 1)) / (1ll * 2)) - ((last * (last - 1) / (1ll * 2)));
            }
            else
            {
                ll k = b - a;
                ans += ((n - k) * a);
                ll t = ((b * (b + 1)) / (1ll * 2)) - ((a * (a + 1)) / (1ll * 2));
                ans += t;
            }
        }
        cout << ans << endl;
    }
    return 0;
}