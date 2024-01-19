#include <iostream>
using namespace std;

void spiral_matrix(int arr[][3], int rows, int cols)
{
    int row_start = 0;
    int row_end = rows - 1;

    int cols_start = 0;
    int cols_end = cols - 1;
    cout << "The spiral elements are:" << endl;
    while (row_start <= row_end && cols_start <= cols_end)
    {

        // for row start
        for (int col = 0; col < cols_end; col++) // 1 2 3, 4 5 6, 7 8 9
        {
            cout << arr[row_start][col] << " ";
        }

        row_start++;

        // for col end
        for (int row = 0; row < row_end; row++)
        {
            cout << arr[row][cols_end] << " ";
        }

        cols_end--;

        // for row end
        for (int col = cols_end; col >= cols_start; col--)
        {
            cout << arr[row_end][col] << " ";
        }

        row_end--;

        // for coloumn start
        for (int row = row_end; row >= row_start; row--)
        {
            cout << arr[row][cols_start] << " ";
        }

        cols_start++;
    }
}
int main()
{

    const int rows = 3;
    const int cols = 3;
    int arr[rows][cols];

    for (int i = 0; i < rows; i++)
    {
        for (int col = 0; col < cols; col++)
        {
            cin >> arr[i][col];
        }
    }

    spiral_matrix(arr, rows, cols);

    return 0;
}