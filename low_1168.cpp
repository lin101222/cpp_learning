#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr.push_back(a);
    }
    int max = arr[0];
    int min = arr[0];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }

        sum += arr[i];
    }
    cout << fixed << setprecision(2) << (sum - max - min) * 1.0 / (n - 2) << endl;

    return 0;
}