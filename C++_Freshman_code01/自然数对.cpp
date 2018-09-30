#include<iostream>
using namespace std;
int main()
{
    int a,b;
    for(int i=1; i<334; i++)
    {
        a=i;
        b=667-i;
        while( b > 0)
        {
            int t = a % b;
            a = b;
            b = t;
        }
        if((i/a)*((667-i)/a)==120)
        {
            cout<<i<<","<<667-i<<endl;
        }
    }
}



//最小公倍数与最大公约数的商等于两个数分别与最大公约数的商的积
/*
int yue(int n)
{
    int m=667-n;
    for(int i=n; i>=1; i--)
    {
        if(n%i==0&&m%i==0)
            return i;
    }
}

int bei(int n)
{
    int m=667-n;
    for(int i=m; i<667; i++)
    {
        if(i%n==0&&i%m==0)
            return i;
    }
}
*/

