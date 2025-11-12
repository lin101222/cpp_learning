#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    cin >> n;
    for (int i = 0; i < m; i++)
    {
        if (arr[i] == n)
        {
            cout << i+1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}