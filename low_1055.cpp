#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for (int  i = 1; i <=n; i++)
    {
        if (i%3==2&&i%5==3&&i%7==2)
        {
            count++;
        }
        
    }
    
    cout<<count<<endl;
    return 0;
}