#include<iostream>
using namespace std;
int main()
{
    for (int i = 100; i < 1000; i++)
    {
        int g=i%10;
        int s=i/10%10;
        int b=i/100;
        if (g*g*g+s*s*s+b*b*b==i)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}