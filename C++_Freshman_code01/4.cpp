#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
    double x,a,e;
    cin>>x>>a>>e;
    double temp=a*x*1.0;
    double sum=1;
    double lcount=1;
    while(fabs(temp)>=e)
    {
        lcount++;
        sum+=temp;
        a-=1;
        temp*=(a*x*1.0/lcount);
    }
    cout<<lcount<<" "<<fixed<<setprecision(8)<<sum;
}
