// ### 1329. 求梯形的面积

// #### 问题描述
// 梯形面积的求解公式为 \( S = (a + b) \times h / 2 \)。
// 从键盘读入一个梯形的上底 \( a \)、下底 \( b \) 和高 \( h \)，请计算该梯形的面积。（结果保留1位小数）。
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b,h;
    cin>>a>>b>>h;
    double S=(a+b)*h/2.0;
    cout<<fixed<<setprecision(1)<<S<<endl;
    return 0;
}