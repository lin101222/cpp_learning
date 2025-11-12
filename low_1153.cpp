#include <iostream>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= m - 2; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            cout << arr[i] << endl;
        }
    }

    return 0;
}