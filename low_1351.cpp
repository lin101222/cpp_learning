#include<iostream>
using namespace std;
int main()
{
    for (int i = 1; i <5; i++)
    {
        int left=40-8*i;
        if (left%3==0)
        {
            cout<<i<<" "<<left/3<<endl;
        }
        
    }
    
    return 0;
}