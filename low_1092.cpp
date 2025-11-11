// ### 1092 - aabb

// #### 题目描述
// 查找形如"aabb"的四位完全平方数，也即前两位数字相同，后两位数字也相同。

// #### 输入
// 无。

// #### 输出
// 若干行，每行一个符合条件的四位数（从小到大）。

// #### 来源
// 需要找规律的循环

// #### 标签
// 需要找规律的循环
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    for (int i =32; i <= 99; i++)
    {
        int num=i*i;
        a=num/1000;
        b=num/100%10;
        c=num/10%10;
        d=num%10;
        if (a==b&&c==d)
        {
            cout<<num<<endl;
        }
        
    }
    
    return 0;
}