// ### 1418. 求一个5位数的各个位之和

// #### 问题描述
// 从键盘读入一个5位的正整数，请求出这个5位数的各个位之和。

// #### 输入
// 一个5位的正整数 \( n \)。

// #### 输出
// 这个5位数的各个位之和。
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ge=n%10;
    int shi=n/10%10;
    int bai=n/100%10;
    int qian=n/1000%10;
    int wan=n/10000;
    cout<<ge+shi+bai+qian+wan<<endl;
    return 0;
}