#include <iostream>
using namespace std;
int main()
{
    int x, m, n;
    cin >> x;
    cin >> m >> n;
    int count = 0;
    for (int i = m; i <= n; i++)
    {
        int g = i % 10;
        int s = i / 10 % 10;
        int b = i / 100 % 10;
        int q = i / 1000;
        if (g == x || s == x || b == x || q == x)
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}