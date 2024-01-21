#include <iostream>

using namespace std;

void smartSearch(int arr[][4], int n, int m, int target)
{
    for (int i = 0; i < n;)
    {
        for (int j = 3; j < m;)
        {
            if (arr[i][j] == target)
            {
                cout << "Element found at index "
                     << "[" << i << "," << j << "]" << endl;
                return;
            }
            if (arr[i][j] > target)
            {
                j--;
            }
            else
            {
                i++;
            }
        }
        cout << endl;
    }
}

int main()
{
    const int n = 4;
    const int m = 4;

    int arr[n][m];

    cout << "Enter the elements of array:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter the element to search:" << endl;
    cin >> target;

    cout << "Calling a search function!" << endl;

    smartSearch(arr, n, m, target);
}