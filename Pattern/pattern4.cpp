#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int arr[5] = {1, 2, 3, 0, 5};
    int n = 5;
    for (int k = 0; k <= n; k++)
    {
        for (int i = 0; i <= arr[k]; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}