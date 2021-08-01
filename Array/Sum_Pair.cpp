#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int arr[5] = {1, 5, 2, 4, 6};
    int target = 33;
    int n = 5, flag = 0;
    unordered_map<int, int> map;
    for (int i = 0; i < n; i++)
    {
        if (map[target - arr[i]])
        {
            cout << arr[i] << " " << target - arr[i];
            flag = 1;
            break;
        }
        map[arr[i]] = 1;
    }
    if (flag == 0)
    {
        cout << "Not Found" << endl;
    }

    return 0;
}