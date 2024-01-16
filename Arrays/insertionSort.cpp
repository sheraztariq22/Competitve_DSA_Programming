#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    int current;
    for (int i = 1; i < n; i++)
    {
        current = arr[i];
        int j = i - 1;

        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = current;
    }
}

int main()
{
    int n = 5;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "The sorted array is:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}