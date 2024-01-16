#include <iostream>

using namespace std;

void maxArray(int arr[], int n)
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }

        cout << max << " ";
    }
}

int main()
{

    const int n = 6;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The max output is: " << endl;
    maxArray(arr, n);

    return 0;
}