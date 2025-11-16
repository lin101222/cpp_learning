// 这一天，小明给自己的游泳时间做了精确的计时（本题中的计时都按 24 小时制计算），它发现自己从 a 时 b 分一直游泳到当天的 c 时 d 分。

// 请你帮小明计算一下，它这天一共游了多少时间呢？
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    
    int tmin=(c*60+d)-(a*60+b);
    int hour=tmin/60;
    int min=tmin%60;

    cout<<hour<<" "<<min<<endl;

    return 0;
}