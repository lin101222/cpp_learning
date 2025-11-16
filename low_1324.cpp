// ### 1324. 扩建鱼塘问题

// #### 问题描述
// 有一个尺寸为 \( m \times n \) 的矩形鱼塘，需将其扩建为正方形，求面积至少增加的平方米数。

// #### 输入
// 两个整数 \( m \) 和 \( n \)。

// #### 输出
// 一个整数，代表鱼塘面积增加的值。
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    if (m>=n)
    {
        cout<<m*m-m*n<<endl;
    }
    else
    {
        cout<<n*n-m*n<<endl;
    }
    
    return 0;
}