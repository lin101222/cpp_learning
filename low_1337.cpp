// ### 1337. 求花坛的面积

// #### 问题描述
// 龙湖校区有一个圆形花坛，量得花坛周围的篱笆长是 \( x \) 米，请问该花坛的面积是多少平方米？（假设\( \pi = 3.14 \)）。
// #### 输入
// 一个小数 \( x \)。

// #### 输出
// 花坛的面积（结果保留 2 位小数）
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double x;
    cin>>x;
    double pi=3.14;
    double r=x/(2*pi);
    double s=pi*r*r;
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}