#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    for (int i = 1; i < 11; i++)
    {
        // 小于头的数量
        for (int j = 1; j < 100 - i * 9; j++)
        {

            if ((100 - 2 * i - 2 * j) % 4 == 0)
            {
                int k = 100 - i * 9 - j;
                if (k != 0 && i * 2 + j * 2 + k * 4 == 100)
                {
                    cout << i << " " << j << " " << k << endl;
                    count++;
                }
            }
        }
    }
    cout << count << endl;
    return 0;
}