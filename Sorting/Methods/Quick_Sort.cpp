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
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int swapIndex = low - 1;
    for (int i = low; i < high; i++)
    {
        if (arr[i] < pivot)
        {
            swapIndex++;
            swap(&arr[swapIndex], &arr[i]);
        }
    }
    swapIndex++;
    swap(&arr[swapIndex], &arr[high]);
    return swapIndex;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int indexPI = partition(arr, low, high);
        quickSort(arr, low, indexPI - 1);
        quickSort(arr, indexPI + 1, high);
    }
}

int main()
{
    int arr[] = {1, 54, 33, 40, 3, 16, 7, 81, 29, 100};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << n << endl;
    quickSort(arr, 0, n - 1);
    cout << "Final Array: " << endl;
    displayArray(arr, n);
    return 0;
}