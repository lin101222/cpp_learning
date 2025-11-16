#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin>>m>>n;
    for (int i = m; i <= n; i++)
    {
        int g = i % 10;
        int s = i / 10 % 10;
        int b = i / 100 % 10;
        if (i > 999)
        {
            int q = i / 1000;
            if ((q - b)==(b - s)&&(b - s)==(s - g))
            {
                cout << i << endl;
            }
        }
        else
        {
            if (b - s == s - g)
            {
                cout<<i<<endl;
            }
        }
    }

    return 0;
}