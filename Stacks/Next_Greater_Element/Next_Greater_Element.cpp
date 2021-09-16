#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (i = 0; i < n; i++)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl

mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());

//=======================

void solve()
{
    int i, n;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    stack<int> s;
    unordered_map<int, int> dict;
    s.push(arr[0]);
    for (i = 1; i < n; i++)
    {
        int next = arr[i];
        if (!s.empty())
        {
            int element = s.top();
            s.pop();
            while (element < next)
            {
                dict[element] = next;
                if (s.empty())
                {
                    break;
                }
                element = s.top();
                s.pop();
            }
            if (element > next)
            {
                s.push(element);
            }
        }
        s.push(next);
    }
    while (!s.empty())
    {
        int element = s.top();
        s.pop();
        int next = -1;
        dict[element] = next;
    }
    for (i = 0; i < n; i++)
    {
        cout << dict[arr[i]] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}