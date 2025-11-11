// 1059 - 求数
// 题目描述
// 1∼999 中有因数3 ，且至少有一位数字是 5 的数。
// 输出
// 若干个数 每行一个。
#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i < 1000; i++)
    {
        int ge=i%10;
        int shi=i/10%10;
        int bai=i/100%10;
        if (i%3==0&&(ge==5||shi==5||bai==5))
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}