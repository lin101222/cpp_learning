#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int arr[101];
int main()
{
    // n个数
    int n;
    cin >> n;
    // 计算总和
    int sum = 0;
    vector<int> seq;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        arr[a]++;
        sum += a;
        seq.push_back(a);
    }
    int max = arr[0];
    int tar = 0;
    // 找到众数
    for (int i = 0; i <= 100; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            tar = i;
        }
    }
    // 找到中位数
    // 排序
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (seq[j] > seq[j + 1])
            {
                int t = seq[j];
                seq[j] = seq[j + 1];
                seq[j + 1] = t;
            }
        }
    }

    // 输出平均数
    cout << fixed << setprecision(2) << sum * 1.0 / n << " ";
    // 输出众数
    cout << fixed << setprecision(0) << tar <<" ";
    // 输出中位数
    if (n % 2 == 0)
    {
        cout << fixed << setprecision(1) << (seq[n / 2] + seq[(n / 2) - 1]) * 1.0 / 2 << endl;
    }
    else
    {
        cout << fixed << setprecision(1) << seq[(n - 1) / 2]*1.0 << endl;
    }

    return 0;
}