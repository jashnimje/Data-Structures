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
void selectionSort(int arr[], int n)
{
    int min = 0;
    for (int i = 0; i < n - 1; i++)
    {
        min = arr[i];
        int index = i;
        for (int j = i + 1; j < n - 1; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = min;
        arr[index] = temp;
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
    selectionSort(arr, n);
    return 0;
}