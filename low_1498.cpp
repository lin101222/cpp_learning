#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr_num[101] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr_num[a]++;
    }
    int max = arr_num[0];
    int tar = 0;
    for (int i = 0; i <= 100; i++)
    {
        if (arr_num[i] >= max)
        {
            max = arr_num[i];
            tar = i;
        }
    }
    cout << tar << endl;

    return 0;
}