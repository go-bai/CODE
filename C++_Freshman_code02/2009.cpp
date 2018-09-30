#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double n;
    int m;
    double sum;
    while(cin>>n>>m)
    {
        sum=n;
        m=m-1;
        while(m>0)
        {
            sum+=sqrt(n);
            n=sqrt(n);
            m--;
        }
        cout<<fixed<<setprecision(2)<<sum<<endl;
    }
}
