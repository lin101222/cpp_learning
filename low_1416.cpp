//从键盘读入2 个整数，分别代表一个长方形的长和宽，请计算长方形的周长和面积。
//从键盘读入 2 个整数，用空格隔开。
//输出有 2 行，第 1 行代表周长，第 2 行代表面积。
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int C=(a+b)*2;
    int S=a*b;
    cout<<C<<endl;
    cout<<S<<endl;
    return 0;
}