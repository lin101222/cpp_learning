#include<iostream>
using namespace std;
int main()
{
    int count=0;
    for (int i = 0; i <1000; i++)
    {
        int g=i%10;
        int s=i/10%10;
        int b=i/100%10;
        int q=i/1000;
        if (g==3||s==3||b==3||q==3)
        {
            count++;
        }
        

    }
    cout<<count<<endl;
    return 0;
}