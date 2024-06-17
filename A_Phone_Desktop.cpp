#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int yTotal = ceil(1.00 * y / 2);
        int xTotal = 15 * yTotal - y * 4;
        if (x <= xTotal)
        {
            cout << yTotal << endl;
        }
        else
        {
            cout << yTotal + ceil(1.00 * (x - xTotal) / 15) << endl;
        }
    }
}