// 1305. 求四个数的最大数

// 问题描述
// 已知有四个不等的数，将其中的最大数找出来。

// 输入
// 输入只有一行，包括 4 个整数。之间用一个空格分开。

// 输出
// 输出只有一行，包括 1 个整数。

// 样例
// 输入
// 1 9 8 6
// 输出
// 9
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int max=a;
    if (max<b)
    {
        max=b;
    }
    if (max<c)
    {
        max=c;
    }
    if (max<d)
    {
        max=d;
    }
    cout<<max<<endl;
    
    
    return 0;
} 
