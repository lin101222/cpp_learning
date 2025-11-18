#include <iostream>
using namespace std;
int arr_num[101];
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
    int count = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (arr_num[i] != 0)
        {
            count++;
        }
    }
    cout << count << endl;
    for (int i = 1; i <= 100; i++)
    {
        if (arr_num[i] != 0)
        {
            cout << i << " " << arr_num[i] << endl;
        }
    }

    return 0;
}