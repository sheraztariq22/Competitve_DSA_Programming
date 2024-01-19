#include <iostream>
using namespace std;

void searching_Element(int arr[][3], int rows, int cols, int element)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] == element)
            {
                cout << " Element found at index "
                     << "[" << i << "," << j << "]" << endl;
            }
        }
    }
}
int main()
{
    const int rows = 3;
    const int cols = 3;
    int arr[rows][cols];
    int element;

    cout << " Enter the elements of arrays" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {

            cin >> arr[i][j];
        }
    }

    cout << "enter the element to be searched: " << endl;
    cin >> element;

    searching_Element(arr, rows, cols, element);

    return 0;
}
