// ### 1338. 求圆环的面积

// #### 问题描述
// 如下图所示的圆环铁片，中间是空心的，已知圆环外圆的半径是 \( r1 \) 厘米（如：10 cm），内圆半径是 \( r2 \) 厘米（如：6 cm），
// 请编程计算该铁片的面积。（外圆面积 - 内圆面积，
// 假设 \( \pi = 3.14 \)，结果保留 2 位小数）
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int r1,r2;
    cin>>r1>>r2;
    double pi=3.14;
    double s=pi*r1*r1-pi*r2*r2;
    cout<<fixed<<setprecision(2)<<s<<endl;
    return 0;
}