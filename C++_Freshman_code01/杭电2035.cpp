//多边形计算公式0.5*|x1*y2-y1*x2+x2*y3-y2*x3+……+xn*y1-yn*x1|
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    int x[105],y[105];
    double sum;
    while(cin>>n)
    {
        if(n==0)
            break;
        sum=0;
        cin>>x[1]>>y[1];
        for(int i=2; i<=n; i++)
        {
            cin>>x[i]>>y[i];
            sum+=x[i-1]*y[i]-x[i]*y[i-1];
        }
        sum=x[n]*y[1]-y[n]*x[1]+sum;
        cout<<fixed<<setprecision(1)<<sum/2<<endl;
    }
    return 0;
}
