#include <iostream>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n >> x >> y;
    for (int i = 1; i < n / x; i++)
    {
        int left = n - i * x;
        if (left % y == 0 && left / y != 0)
        {
            int j = left / y;
            if (i + j > 50)
            {
                cout << i << " " << j << endl;
            }
        }
    }

    return 0;
}