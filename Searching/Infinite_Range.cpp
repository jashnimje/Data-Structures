#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int low, int high, int target)
{
    int mid;
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    vector<int> arr = {1, 2, 4, 5, 7, 8, 9, 11, 13, 16, 17, 18, 20, 21, 25, 27};
    int target = 21;
    int low = 0, high = 1;
    while (arr[high] < target)
    {
        int temp = high + 1;
        high = high + (high - low + 1) * 2;
        low = temp;
    }
    int ans = solve(arr, low, high, target);
    cout << ans << endl;
    return 0;
}