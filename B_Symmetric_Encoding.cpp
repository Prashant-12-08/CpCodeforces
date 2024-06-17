#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        string r;
        cin >> s;
        string temp = "";
        map<char, int> mpp;
        for (auto it : s)
        {
            mpp[it]++;
        }
        for (auto it : mpp)
        {
            r += it.first;
        }
        int size = r.size();

        for (auto it : s)
        {
            char c = it;
            int ind = -1;
            for (int i = 0; i < size; i++)
            {
                if (r[i] == c)
                {
                    ind = i;
                    break;
                }
            }

            {
                temp += r[size - 1 - ind];
            }
        }
        cout << temp << endl;
    }
    return 0;
}