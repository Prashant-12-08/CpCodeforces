// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     for (int tt = 1; tt <= t; tt++)
//     {
//         int n1;
//         string s1;
//         cin >> n1 >> s1;
//         int cnt = 0;
//         vector<char> path(n1);
//         int n = 0, s = 0, w = 0, e = 0;

//         for (auto it : s1)
//         {
//             it == 'N' ? n = n + 1 : 0;
//             it == 'S' ? s = s + 1 : 0;
//             it == 'W' ? w = w + 1 : 0;
//             it == 'E' ? e = e + 1 : 0;
//         }
//         if ((n - s) % 2 || (e - w) % 2)
//         {
//             cout << "NO" << endl;
//             continue;
//         }
//         int r = 0;
//         int h = 0;
//         int flag = 0;
//         for (int i = 0; i < n1; i++)
//         {
//             if (s1[i] == 'N')
//             {
//                 flag ? r++ : 0;
//                 !flag ? h++ : 0;
//                 flag = !flag;
//                 path[i] = flag ? 'R' : 'H';
//             }
//         }
//         flag = 0;
//         for (int i = 0; i < n1; i++)
//         {
//             if (s1[i] == 'S')
//             {
//                 flag ? r++ : 0;
//                 !flag ? h++ : 0;
//                 flag = !flag;
//                 path[i] = flag ? 'R' : 'H';
//             }
//         }
//         flag = 1;
//         for (int i = 0; i < n1; i++)
//         {
//             if (s1[i] == 'E')
//             {
//                 flag ? r++ : 0;
//                 !flag ? h++ : 0;
//                 flag = !flag;
//                 path[i] = flag ? 'R' : 'H';
//             }
//         }
//         flag = 1;
//         for (int i = 0; i < n1; i++)
//         {
//             if (s1[i] == 'W')
//             {
//                 flag ? r++ : 0;
//                 !flag ? h++ : 0;
//                 flag = !flag;
//                 path[i] = flag ? 'R' : 'H';
//             }
//         }
//         if (r == 0 || h == 0)
//         {
//             cout << "NO" << endl;
//             continue;
//         }
//         else
//         {
//             for (auto it : path)
//             {
//                 cout << it;
//             }
//             cout << endl;
//         }
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n1;
        string s1;
        cin >> n1 >> s1;
        int cnt = 0;
        vector<char> path(n1);
        map<char, int> mpp;
        int n = 0, s = 0, w = 0, e = 0;
        int r = 0, h = 0;

        for (auto it : s1)
        {
            it == 'N' ? n = n + 1 : 0;
            it == 'S' ? s = s + 1 : 0;
            it == 'W' ? w = w + 1 : 0;
            it == 'E' ? e = e + 1 : 0;
            mpp[it]++;
        }
        if ((n - s) % 2 || (e - w) % 2)
        {
            cout << "NO" << endl;
            continue;
        }
        mpp['E']++;
        mpp['W']++;
        string ans = "";
        for (auto it : s1)
        {
            if (mpp[it] % 2)
            {
                ans += 'R';
                r++;
            }
            else
            {
                ans += 'H';
                h++;
            }
            mpp[it]--;
        }

        if (r == 0 || h == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        else
        {
            for (auto it : ans)
            {
                cout << it;
            }
            cout << endl;
        }
    }
    return 0;
}