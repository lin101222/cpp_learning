/*学校新买来 m 根跳绳，每个班分 n 根，最多可以分给几个班的同学，还剩多少根？
两个整数，用空格隔开，分别代表总共采购的跳绳数量以及每个班级分到的跳绳数量。
两个整数，用空格隔开，第一个整数代表可以分到的班级的数量，第二个整数代表剩余的跳绳数量。*/
#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int Cla,rest;
    Cla=m/n;
    rest=m%n;
    cout<<Cla<<" "<<rest;
    return 0;
}