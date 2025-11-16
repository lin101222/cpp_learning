// ### 1302. 是否适合晨练？

// #### 问题描述
// 夏天到了，气温较高。小明的爷爷有晨练习惯，但温度不适时不适合晨练。
// 小明想编写程序，帮助爷爷判断温度是否适合晨练。
// 输入温度 \( t \) 的值，若 \( 20 \leq t \leq 30 \)，输出 `OK`（适合晨练）；否则输出 `NO`（不适合晨练）。
#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    if (t<=30&&t>=20)
    {
        cout<<"OK"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    return 0;
}