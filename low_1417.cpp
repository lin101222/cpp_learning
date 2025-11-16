// 文具店的水笔的单价是一个整数，小明从文具店买了 x 支水笔花了 y 元。请问如果你要从该文具店购买 5 支水笔需要付多少钱？
#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int num=y/x*5;
    cout<<num<<endl;
    return 0;
}