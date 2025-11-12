#include <iostream>
#include <iomanip>
using namespace std;
int main()

{
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    double AVE = sum * 1.0 / n;
    cout << fixed << setprecision(1) << "AVE=" << AVE << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > AVE)
        {
            cout << i + 1 << ":" << arr[i] << " ";
        }
    }

    return 0;
}