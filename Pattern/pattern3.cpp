// Jash Nimje

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int i, j, k, l, n;
    cin >> n;
    for (l = 0; l < n; l++)
    {
        for (i = 1; i <= n; i++)
        {
            for (k = 0; k < n; k++)
            {
                for (j = 1; j <= n; j++)
                {
                    if (j == i || j == (n + 1 - i))
                        cout << "*";
                    else
                        cout << " ";
                }
            }
            cout << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    solve();
    return 0;
}