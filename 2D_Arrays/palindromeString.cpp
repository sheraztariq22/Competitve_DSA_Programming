#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char st1[100], revstr1[100];

    cout << "enter string:";
    cin.getline(st1, 100);

    strcpy(revstr1, st1);
    cout << "Rev String:" << revstr1 << endl;
    strrev(revstr1);
    if (strcmp(st1, revstr1) == 0)
    {
        cout << "String is palindrome\n";
    }
    else
    {
        cout << "not palindrome!" << endl;
    }

    return 0;
}