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
void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n - 1; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        cout << "Iteration: " << i << endl;
        displayArray(arr, n);
    }
    cout << "Final Array: " << endl;
    displayArray(arr, n);
}

int main()
{
    int arr[] = {1, 54, 33, 40, 3, 16, 7, 81, 29, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    insertionSort(arr, n);
    return 0;
}