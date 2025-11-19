#include<iostream>
using namespace std;
long arr[100001];
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i <n-2; i++)
    {
        int a;
        cin>>a;
        arr[a]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (arr[i]==0)
        {
            cout<<i<<" ";
        }
        
    }
    
    
    return 0;
}