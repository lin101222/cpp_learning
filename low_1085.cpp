#include<iostream>
using namespace std;
int main()
{
    for (int i =1000; i <9999; i++)
    {
        int qian=i/100;
        int hou=i%100;
        if ((qian+hou)*(qian+hou)==i)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}