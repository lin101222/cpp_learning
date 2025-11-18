#include <iostream>
#include <vector>
using namespace std;
int arr_num[10];
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
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        while (temp != 0)
        {
            int t = temp % 10;
            arr_num[t]++;
            temp /= 10;
        }
    }
    for (int i = 9; i >= 0; i--)
    {
        for (int j = 0; j < arr_num[i]; j++)
        {
            cout << i;
        }
    }

    return 0;
}