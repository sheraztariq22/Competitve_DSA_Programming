#include <iostream>

using namespace std;

void recordBreaking(int arr[], int n)
{
    int m = -1999999;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        // m = max(arr[i - 1], m);
        if (arr[i] > m && arr[i] > arr[i + 1])
        {
            ans++;
        }
        m = max(m, arr[i]);
    }
    cout << "Breaking days are: " << ans << endl;
}

int main()
{

    int arr[6];

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    recordBreaking(arr, 6);

    return 0;
}
