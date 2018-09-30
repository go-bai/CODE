#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x1,x2,y1,y2;
    double lcount1=0;
    double lcount2=0;
    while(n--)
    {
        cin>>x1>>y1>>x2>>y2;
        lcount1=(x1+(x1+y1)*(x1+y1-1)/2);
        lcount1*=sqrt(2);
        for(int i=0;i<(x1+y1);i++)
        {
            lcount1+=sqrt(i*i+(i+1)*(i+1));
        }
        lcount2=(x2+(x2+y2)*(x2+y2-1)/2);
        lcount2*=sqrt(2);
        for(int i=0;i<(x2+y2);i++)
        {
            lcount2+=sqrt(i*i+(i+1)*(i+1));
        }
        cout<<fixed<<setprecision(3)<<abs(lcount2-lcount1)<<endl;
    }
}
