#include<iostream>
using namespace std;
int main()
{
    double n=100.0;
    int count=0;
    while (n>=0.5)
    {
        n/=2.0;
        count++;
    }
    cout<<count<<endl;
    
    return 0;
}