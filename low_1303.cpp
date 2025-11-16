// ### 1303. 冷饮的价格（1）

// #### 问题描述
// 小明去冷饮店买冰激凌，若购买数量≥10个，单价2元/个；若购买数量<10个，单价2.2元/个。请根据输入的购买数量，计算小明应付的价格。

// #### 输入
// 一个整数 \( n \)（\( n \leq 100 \)），代表购买的冰激凌数量。

// #### 输出
// 小明应付的金额（保留1位小数）。
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double money=0;
    if (n>=10)
    {
         money=n*2.0;
    }
    else
    {
         money=n*2.2;
    }
    cout<<fixed<<setprecision(1)<<money<<endl;   
    return 0;
}