#include<iostream>
using namespace std;
inline double circleArea(double r)
{
    return 4.0*3.1415926*r*r;
}
int main()
{
    cout<<"������Բ�İ뾶:";
    double r;
    cin>>r;
    cout<<circleArea(r);
}
