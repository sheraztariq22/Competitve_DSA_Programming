#include <iostream>

using namespace std;

void continousSubArr(int arr[], int n, int target)
{
    int Currsum = 0;
    int start = -1;
    int end = -1;
    int i = 0, j = 0;

    while (j < n && (Currsum + arr[j] <= target))
    {
        Currsum += arr[j];
        j++;
    }

    if (Currsum == target)
    {
        cout << i + 1 << " " << j << endl;
        return;
    }

    while (j < n)
    {
        Currsum += arr[j];

        while (Currsum > target)
        {
            Currsum -= arr[i];
            i++;
        }

        if (Currsum == target)
        {
            start = i + 1;
            end = j + 1;
            break;
        }
    }

    cout << "Start " << start << endl;
    cout << "End " << end << endl;
}

int main()
{
    int n, target;
    cout << "Enter Size:" << endl;
    cin >> n;
    cout << "Enter the target:";
    cin >> target;

    int arr[n];
    cout << "Enter the elemetns of Array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The continous sub array sum index is:" << endl;
    continousSubArr(arr, n, target);

    return 0;
}