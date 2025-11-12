#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            sum1 += arr[i];
        }
        else
        {
            sum2 += arr[i];
        }
    }
    cout << sum1 << endl;
    cout << sum2 << endl;

    return 0;
}