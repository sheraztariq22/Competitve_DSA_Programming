#include <iostream>
#include <cstring>
using namespace std;

void longest_string(char L_string[], int n)
{
    int i = 0;
    int current = 0;
    int max_length = 0;

    while (1)
    {
        if (L_string[i] == ' ' || L_string[i] == '\0')
        {
            if (current > max_length)
            {
                max_length = current;
            }
            current = 0;
        }
        else
        {
            current++;
        }

        if (L_string[i] == '\0')
        {
            break;
        }

        i++;
    }

    cout << "Max length of word in a string: " << max_length << endl;
}

int main()
{
    const int n = 100;
    char L_string[n + 1];

    cout << "Enter string: " << endl;
    cin.getline(L_string, n);

    longest_string(L_string, n + 1);

    return 0;
}
