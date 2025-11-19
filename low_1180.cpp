#include <iostream>
using namespace std;
int arr[20];
int main()
{
    for (int i = 0; i < 50; i++)
    {
        int a;
        cin >> a;
        arr[a]++;
    }
    int max = arr[0];
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << max << endl;

    return 0;
}