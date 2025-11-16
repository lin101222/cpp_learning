// ### 1317. 正多边形每个内角的度数？

// #### 问题描述
// 根据多边形内角和定理，正多边形内角和等于：\( (n-2) \times 180^\circ \)（\( n \) 大于等于 3 且 \( n \) 为整数）
// 请根据正多边形的边数，计算该正多边形每个内角的度数。（结果保留1位小数）。
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double ang=(n-2)*180.0/n;
    cout<<fixed<<setprecision(1)<<ang<<endl;
    return 0;
}