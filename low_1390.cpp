// ### 1390. 四位数的和

// #### 问题描述
// 请从键盘读入一个四位整数，求这个四位整数各个位的和是多少？

// #### 输入
// 一个四位整数 \( n \)。

// #### 输出
// 这个四位数各个位的和。
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ge=n%10;
    int shi=n/10%10;
    int bai=n/100%10;
    int qian=n/1000;
    cout<<ge+shi+bai+qian<<endl;
    return 0;
}