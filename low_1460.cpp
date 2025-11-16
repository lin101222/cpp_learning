#include <iostream>
using namespace std;
int main()
{
    double x;
    cin >> x;
    double n = 2.0;
    int count = 1;
    double t = 2.0;
    while (n < x)
    {
        t *= 0.98;
        n = n + t;
        count++;
    }
    cout << count << endl;

    return 0;
}