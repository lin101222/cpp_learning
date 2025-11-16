#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count=0;
    for (int i =1; i <=n; i++)
    {
        int sum=0;
        int temp=i;
        while (temp!=0)
        {
            sum+=temp%10;
            temp/=10;
            if (temp==0)
            {
                break;
            }
            
        }
        if (sum%2!=0&&sum%5!=0)
        {
            count++;
        }
        
        
    }
    cout<<count<<endl;
    
    return 0;
}