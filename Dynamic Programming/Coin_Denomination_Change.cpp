#include <bits/stdc++.h>
using namespace std;

int recur(int total, int rem, int flag)
{
    cout << flag << " ";
    if (rem == 0)
    {
        cout << endl;
        return 1;
    }
    if (flag == 1)
    {
        if (rem - 2 >= 0)
        {
            return recur(total + 2, rem - 2, 2) + recur(total + 1, rem - 1, 1);
        }
        else
        {
            return recur(total + 1, rem - 1, 1);
        }
    }
    else
    {
        return recur(total + 1, rem - 1, 1);
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int i, j, n, m;
    cin >> n;
    cout << recur(0, n, 1) << endl;
    return 0;
}