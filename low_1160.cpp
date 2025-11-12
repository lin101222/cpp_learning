#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    double sum = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    if (sum > 100)
    {
        sum = 100 + (sum - 100) * 0.9;
        cout << fixed << setprecision(2) << sum << endl;
    }
    else
    {
        cout << fixed << setprecision(2) << sum << endl;
    }

    return 0;
}