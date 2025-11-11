// ### 题目描述
// 把英文字母表的小写字母按顺序和倒序打印出来。(每行 13 个)

// ### 输入
// 无

// ### 输出
// 输出四行。

// ### 样例
// | 输入 | 
// |------|
// | 无   | 
// abcdefghijklm
// nopqrstuvwxyz
// zyxwvutsrqpon
// mlkjihgfedcba 
#include<iostream>
using namespace std;
int main()
{
    for (char ca = 'a'; ca <='z'; ca++)
    {
        cout<<ca;
        if (ca=='m')
        {
            cout<<"\n";
        }
        
    }
    cout<<endl;
        for (char ca1 = 'z'; ca1 >='a'; ca1--)
    {
        cout<<ca1;
        if (ca1=='n')
        {
            cout<<"\n";
        }
        
    }
    
    return 0;
}