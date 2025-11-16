#include <iostream>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    for (int i = 0; i <= n / x; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i * x + j * y == n && i + j >= 5)
            {
                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}