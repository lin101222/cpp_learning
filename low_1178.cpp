#include<iostream>
using namespace std;
int arr[10];
int main()
{
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        int temp=i;
        while (temp!=0)
        {
            int t=temp%10;
            temp/=10;
            arr[t]++;
        }
        
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<endl;
    }
        
    return 0;
}