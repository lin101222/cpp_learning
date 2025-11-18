#include <iostream>
using namespace std;
int arr_num[11];
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr_num[a]++;
    }
    for (int i = 1; i <= 10; i++)
    {
        if (arr_num[i] != 0)
        {
            cout << i << " " << arr_num[i] << endl;
        }
    }

    return 0;
}