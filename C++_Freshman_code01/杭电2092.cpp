#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m&&(n!=0||m!=0))
    {
        double d=n*n-4*m;
        if(d<0)
        {
            cout<<"No"<<endl;
        }

        else if(d==0)
        {
            if(n%2==0)
               cout<<"Yes"<<endl;
        }
        else if(d>0)
        {
            double a=(n+sqrt(d))/2.0;
            double b=(n-sqrt(d))/2.0;
            if(a-(int)a==0&&b-(int)b==0)
            {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;
        }

    }
}
