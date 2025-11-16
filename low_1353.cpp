#include <iostream>
using namespace std;
int main()
{
    int n;
    char a;
    cin >> n;
    cin >> a;
    if (a == 'y')
    {
        for (int i = 0; i < n; i++)
        {
            for (int m = 0; m < 2; m++)
            {
                for (int j = 0; j < n - i - 1; j++)
                {
                    cout << " ";
                }
                for (int k = 0; k < 2 * i + 1; k++)
                {
                    cout << "*";
                }
                for (int j = 0; j < n - i - 1; j++)
                {
                    cout << " ";
                }
            }

            cout << endl;
        }
    }
    else if (a == 'x')
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < 2 * i + 1; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                cout << " ";
            }
            for (int k = 0; k < 2 * (n - i) - 1; k++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }

    return 0;
}
