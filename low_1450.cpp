#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x, n;
    cin >> x >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int totle = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int sum = 0;
        while (temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == x)
        {
            totle += arr[i];
            count++;
        }
    }
    cout << totle << " " << count << endl;
    vector<int> arr2;
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int sum = 0;
        while (temp != 0)
        {
            sum += temp % 10;
            temp /= 10;
        }
        if (sum == x)
        {
            arr2.push_back(arr[i]);
        }
    }
    int len = sizeof(arr2) / sizeof(arr[0]);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len - i - 1; j++)
        {
            if (arr2[j] > arr2[j + 1])
            {
                int temp2 = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp2;
            }
        }

        for (int i = 0; i < len; i++)
        {
            cout << arr2[i] << " ";
        }

        return 0;
    }
}