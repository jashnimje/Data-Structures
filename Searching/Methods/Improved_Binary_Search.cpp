#include <bits/stdc++.h>
using namespace std;

int AgonisticBS(int arr[], int n, int target)
{
    bool isAsc = arr[0] < arr[n - 1];
    int start = 0, end = n - 1;
    while (start < end)
    {
        int mid = start + (end - start) / 2;
        if (target == arr[mid])
        {
            return mid;
        }

        if (isAsc)
        {
            if (arr[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
        else
        {
            if (arr[mid] > target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    // int arr[] = {1, 2, 4, 5, 6, 8, 22, 43};
    int arr[] = {55, 45, 33, 26, 22, 11};
    int target = 22;
    int n = *(&arr + 1) - arr;
    int ans = AgonisticBS(arr, n, target);
    cout << ans << endl;
}