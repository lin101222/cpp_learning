#include<iostream>
using namespace std;
int main()
{
    for (int i = 1000; i < 10000; i++)
    {
        int hou=i%100;
        int q=i/1000;
        int b=i/100%10;
        if ((b*10+q)==hou)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}