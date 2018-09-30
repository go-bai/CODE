#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double x,e;
    cin>>x>>e;
    int n=0;//记录迭代次数
    double cos=1;
    double temp=0;
    double partcos=1;
    while(partcos>=e)
    {
        n++;
        partcos=partcos*x*x/(n*2*(n*2-1));
        if(n%2==0)
            cos+=partcos;
        else
            cos-=partcos;
    }
    cout<<n<<" "<<fixed<<setprecision(7)<<cos;
}
