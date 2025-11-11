#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n / 5; i++)
    {
        for (int j = (n - 5 * i) / 3; j > 0; j--)
        {
            int k = m - i - j;
            if (i * 5 + j * 3 + k * 1 / 3 == n && k % 3 == 0)
            {
                cout << i << " " << j << " " << k << endl;
            }
        }
    }

    return 0;
}