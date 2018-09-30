#include<iostream>
using namespace std;
int lmin(int a,int b,int c)
{
    int lmin;
    if(a>b)
        lmin=b;
    else
        lmin=a;
    if(c<lmin)
        lmin=c;
    cout<<lmin;
    //return lmin;
}
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    lmin(a,b,c);
    //return lmin(a,b,c);
}
