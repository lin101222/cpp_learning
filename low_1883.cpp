#include <iostream>
using namespace std;
int arr_num[11];
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
    int max = arr_num[1];
    int tar = 1;
    for (int i = 1; i <= 10; i++)
    {
        if (arr_num[i] > max)
        {
            max = arr_num[i];
            tar = i;
        }
    }
    cout << tar << endl;

    return 0;
}