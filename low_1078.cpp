#include<iostream>
using namespace std;
int main()
{
    int X;
    cin>>X;
    int n=1;
    double sum=1.0;
    while (sum<X)
    {   n++;
        sum+=1.0/n;
        
    }
    cout<<n;
    
    return 0;
}