#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        while (temp != 0)
        {
            if (temp % 10 == 1)
            {
                count++;
                temp /= 10;
            }
            else
            {
                temp /= 10;
            }
        }
    }
    cout << count << endl;
    return 0;
}