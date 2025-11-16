// 梅山小学有一块长方形花圃（花圃的长宽都是整数），长 m 米，宽未知。

// 在修建校园时，花圃的长增加了 n 米，此时发现增加出来的面积有 s 平方米。

// 请编程计算出原来花圃的面积是多少平方米？
#include<iostream>
using namespace std;
int main()
{
    int m,n,s;
    cin>>m>>n>>s;
    int wide=s/n;
    int S=wide*m;
    cout<<S<<endl;
    return 0;
}