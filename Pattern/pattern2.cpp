// Jash Nimje

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int i, j, k, l, n, m;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            for (k = 0; k < i; k++)
            {
                cout << " ";
            }
            for (l = 0; l < n; l++)
            {
                cout << "*";
                for (m = 0; m < n - 1; m++)
                {
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