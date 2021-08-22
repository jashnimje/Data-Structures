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
void bubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        cout << "Iteration: " << i + 1 << endl;
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
    bubbleSort(arr, n);
    return 0;
}