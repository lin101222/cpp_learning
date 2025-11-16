#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    for (int i = 1; i <= n; i++)
    {
        int g=i%10;
        int s=i/10%10;
        int b=i/100;
        if (i%7!=0&&g!=7&&s!=7&&b!=7)
        {
            sum+=i;
        }
        
    }
    cout<<sum<<endl;
    
    return 0;
}