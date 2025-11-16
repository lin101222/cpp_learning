// 1464. 晶晶的补习班

// 问题描述
// 晶晶上初中了。妈妈认为晶晶应该更加用功学习，所以晶晶除了上学之外，还要参加妈妈为她报名的各科补习班。
// 晶晶的妈妈给了晶晶的下周每天上补习班的小时数，
// 晶晶同学想知道，下周平均一天要上多少小时的补习班（结果保留 1 位小数），最长的补习班需要上几小时，最短的补习班需要上几小时？

// 输入
// 7 个整数，用空格隔开，代表晶晶同学下周 7 天需要上的补习班的小时数。

// 输出
// 一个小数和两个整数，用空格隔开，
// 第一个小数代表下周平均每天需要上多少小时补习班（结果保留 1 位小数），
// 第二个整数代表最长的补习班的小时数，第三个整数代表最短的补习班的小时数。
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int arr[7];
    for (int i = 0; i <7; i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for (int j = 0; j < 6; j++)
    {
        if (max<arr[j+1])
        {
            max=arr[j+1];
        }
        
    }
    for (int  k = 0; k < 6; k++)
    {
        if (min>arr[k+1])
        {
            min=arr[k+1];
        }
        
    }
    double sum=0;
    for (int  z = 0; z < 7; z++)
    {
        sum+=arr[z];
    }
    sum=sum/7.0;
    cout<<fixed<<setprecision(1)<<sum<<" "<<max<<" "<<min<<endl;

    
    
    
    
    return 0;
}