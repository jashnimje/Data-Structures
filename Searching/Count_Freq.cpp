#include <bits/stdc++.h>
using namespace std;
void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void countFreq(int arr[], int n)
{
    bool flag = false;
    int i, j, count = 0;
    for (i = 0; i < n; i++)
    {
        flag = false;
        count = 0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = true;
            }
        }
        if (flag)
        {
            continue;
        }
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        cout << "Final Count: " << arr[i] << " " << count << endl;
    }

    displayArray(arr, n);
}

void countFreqBetter(int arr[], int n)
{
    int i = 1, count = 1;
    sort(arr, arr + n);
    displayArray(arr, n);
    while (i <= n)
    {
        count = 1;
        while (i < n && arr[i] == arr[i - 1])
        {
            count++;
            i++;
        }
        cout << "Final Count: " << arr[i - 1] << " " << count << endl;
        i++;
    }
}

int main()
{
    int arr[] = {1, 52, 33, 52, 33, 16, 7, 41, 52, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    // countFreq(arr, n);
    countFreqBetter(arr, n);
    return 0;
}