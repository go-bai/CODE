#include<iostream>
using namespace std;
inline double circleArea(double r)
{
    return 4.0*3.1415926*r*r;
}
int main()
{
    cout<<"ÇëÊäÈëÔ²µÄ°ë¾¶:";
    double r;
    cin>>r;
    cout<<circleArea(r);
}
