#include <iostream>
#include <climits>
using namespace std;

void DuplicateElement(int arr[], int n)
{

    int counter = 0;
    int index = -1;
    int min_index = INT_MAX;
    const int m = 8;
    int idx[m];

    for (int i = 0; i < m; i++)
    {

        idx[i] = -1;
    }

    for (int i = 0; i < n; i++)
    {

        if (idx[arr[i]] != -1)
        {
            min_index = min(idx[arr[i]], min_index);
        }
        else
        {
            idx[arr[i]] = i;
        }
    }
    cout << "min index of duplicate element: " << min_index << endl;
}
int main()
{
    const int n = 7;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    DuplicateElement(arr, n);
    return 0;
}
