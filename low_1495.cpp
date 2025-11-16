#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        int count =0;
        for (int j = 2; j <i; j++)
        {
            if (i%j==0)
            {
                count++;
            }
            
        }
        cout<<count<<endl;
    }
    
    return 0;
}