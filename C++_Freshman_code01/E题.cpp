#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,a,b,c,d,e,f;
    cin>>n;
    while(n--)
    {
        cin>>a>>b>>c>>d;
        f=b*d;
        e=(a*d+c*b);
        int temp=__gcd(f,e);
        while(temp!=1)
        {
            f/=temp;
            e/=temp;
            temp=__gcd(f,e);
        }
        cout<<e<<" "<<f<<endl;

    }
}
