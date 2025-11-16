#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n; i += 2)
    {
        for (int j = 2; j < n; j += 2)
        {
            int k = n - i - j;
            if (i + j + k == n && k >= j && j >= i)
            {
                cout << i << " " << j << " " << k << endl;
            }
        }
    }

    return 0;
}