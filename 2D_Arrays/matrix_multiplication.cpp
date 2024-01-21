#include <iostream>
using namespace std;

void multiplication(int n1, int n2, int n3, int A[][2], int B[][2], int C[][2])
{

    cout << "Multiplication Matrix " << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
            for (int k = 0; k < n3; k++)
            {

                {

                    C[i][j] += A[i][k] * B[k][j];
                }
            }
    }
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    const int n1 = 2, n2 = 2, n3 = 2;
    int A[n1][n2];
    int B[n2][n3];
    int C[n1][n3];

    cout << "Enter the elements of First Arrays:" << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "Enter the elements of Second array:" << endl;
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < n3; j++)
        {
            cin >> B[i][j];
        }
    }

    for (int i = 0; i < n1; i++)
    {

        for (int j = 0; j < n3; j++)
        {
            C[i][j] = 0;
        }
    }
    multiplication(n1, n2, n3, A, B, C);

    return 0;
}
