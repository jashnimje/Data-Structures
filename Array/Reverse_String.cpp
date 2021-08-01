#include <bits/stdc++.h>
using namespace std;

void reverseString(int arr[], int n)
{
    int temp;
    int size = n;
    for (int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
        // cout << arr[i];
    }
}

void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int i, j, n, a;
    cin >> n;
    int arr[n];

    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    display(arr, n);
    reverseString(arr, n);
    display(arr, n);
    return 0;
}