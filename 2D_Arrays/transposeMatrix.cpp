#include <iostream>
using namespace std;

void transpose_matrix(int arr[][3], int rows, int cols)
{

    cout << "Transposed Matrix " << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}

int main()
{

    const int rows = 3;
    const int cols = 3;
    int arr[rows][cols] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    transpose_matrix(arr, rows, cols);

    return 0;
}
