#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a,b,c;
    while(n--)
    {
        cin>>a>>b>>c;
        if((a+b>c)&&(a+c>b)&&(c+b>a)&&a>0&&b>0&&c>0)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }


}
