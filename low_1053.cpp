// 求100+97+⋯+4+1的值。
#include<iostream>
using namespace std;
int main()
{
    int num=0;
    for (int i = 1; i < 101; )
    {
        num+=i;
        i+=3;
    }
    cout<<num<<endl;
    return 0;
}