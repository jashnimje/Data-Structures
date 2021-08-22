#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int key)
{
    if (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            r = mid - 1;
            binarySearch(arr, l, r, key);
        }
        else
        {
            l = mid + 1;
            binarySearch(arr, l, r, key);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 11;
    int index = binarySearch(arr, 0, n - 1, key);
    if (index != -1)
    {
        cout << "Found at index " << index << endl;
    }
    else
    {
        cout << "Not found" << endl;
    }
    return 0;
}