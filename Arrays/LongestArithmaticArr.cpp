#include <iostream>

using namespace std;

int longestArr(int arr[], int n)
{
    int prevDiff = arr[1] - arr[0];
    int j = 2;
    int length = 2;
    int curr = 2;

    for (int i = j; i < n; i++)
    {
        if (prevDiff == arr[i] - arr[i - 1])
        {
            curr++;
        }
        else
        {
            prevDiff = arr[i] - arr[i - 1];
            curr = 2;
        }
        length = max(length, curr);
    }

    return length;
}

int main()
{

    const int n = 7;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The lenght of longest aritmatic array is " << longestArr(arr, n) << endl;

    return 0;
}
