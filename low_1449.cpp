#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for (int i = 1; i <=n; i++)
    {
        if (i%6==0||i%15==0||i%35==0||i%14==0||i%10==0||i%21==0)
        {
            count+=i;
        }
        
    }
    cout<<count<<endl;
    return 0;
}