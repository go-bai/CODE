#include<iostream>
using namespace std;
int gcd(int x,int y)
{
    if(y==0)
        cout<<x;
    else
    {
        gcd(y,x%y);
    }
}
int main()
{
    int x,y;
    cin>>x>>y;
    gcd(x,y);
}
