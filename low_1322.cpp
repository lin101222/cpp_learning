// 1322. 求数的量级?

// 问题描述
// 有一个很大的整数 n（n ≥ 10000 且 n ≤ 9999999999），请问该数的最高位是什么量级的，输出该量级的拼音？

// 可选单位：万（wan）、十万（shi wan）、百万（bai wan）、千万（qian wan）、亿（yi）、十亿（shi yi）。

// 如：n = 123456789，则输出：yi。
#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if ((n/10000>0)&&(n/10000<10))
    {
        cout<<"wan"<<endl;
    }
    else if ((n/100000>0)&&(n/100000<10))
    {
        cout<<"shi wan"<<endl;
    }
    else if ((n/1000000>0)&&(n/1000000<10))
    {
        cout<<"bai wan"<<endl;
    }
    else if ((n/10000000>0)&&(n/10000000<10))
    {
        cout<<"qian wan"<<endl;
    }
    else if ((n/100000000>0)&&(n/100000000<10))
    {
        cout<<"yi"<<endl;
    }
    else if ((n/1000000000>0)&&(n/1000000000<10))
    {
        cout<<"shi yi"<<endl;
    }
    
    
    return 0;
}