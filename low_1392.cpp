#include<iostream>
using namespace std;
int main()
{
    for (int i = 100; i <1000; i++)
    {
        int g=i%10;
        int b=i/100;
        if (g==b&&i%2==0)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}