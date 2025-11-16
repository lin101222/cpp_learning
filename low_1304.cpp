// 1304. 冷饮的价格（2）

// 问题描述
// 小明夏天去买冰棍，老板说买 30 个及以上 1 元/个，20～29 个 1.2 元/个，10～19 个 1.5 元/个，10 个以下 1.8 元/个！
// 请从键盘读入小明买冰棍的数量，计算小明应该付的价格（价格保留 1 位小数）！

// 输入
// 一个整数 n 代表小明购买的冰棍的数量。

// 输出
// 小明应付的金额。

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double money=0;
    if (n>=30)
    {
        money=n*1.0;
    }
    else if (n>=20&&n<=29)
    {
        money=n*1.2;
    }
    else if (n>=10&&n<=19)
    {
        money=n*1.5;
    }
    else
    {
        money=n*1.8;
    }
    cout<<fixed<<setprecision(1)<<money<<endl;
    
    
    return 0;
}