// ### 题目描述
// 给出一个正整数 \( n \)（\( 1 \leq n \leq 1000 \)），求出 \( 1, 2, \dots n \) 中全部奇数和以及全部偶数的和。例如：\( n = 9 \)；
// 奇数和 \( 1 + 3 + 5 + 7 + 9 = 25 \)；
// 偶数和 \( 2 + 4 + 6 + 8 = 20 \)。
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ji=0;
    int ou=0;
    
        for (int i = 1; i <=n; i++)
        {
            if (i%2==1)
            {
                ji+=i;
            }
            else
            {
                ou+=i;
            }
            
        }
        
    
    cout<<ji<<endl;
    cout<<ou<<endl;
    
    return 0;
}