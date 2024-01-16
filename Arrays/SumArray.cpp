#include <iostream>

using namespace std;

void sumArray(int arr[], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];

            cout << sum << endl;
        }
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

    cout << "The sum  of sub arrays are:" << endl;
    sumArray(arr, n);
}