#include<iostream>
using namespace std;
int arr[1001];
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        arr[a]++;
    }
    for (int i = 0; i <=1000; i++)
    {
        if (arr[i]%2!=0)
        {
            cout<<i<<endl;
        }
        
    }
    
    
    return 0;
}