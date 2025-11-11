#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        int g = i % 10;
        int s = i / 10 % 10;
        int b = i / 100 % 10;
        int q = i / 1000 % 10;
        int w = i / 10000;
        int count = 0;
        if (g==5||s==5||b==5||q==5||w==5)
        {
            count++;
        }
        
        if (i % 5 == 0&&count!=0)
        {
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}