#include<stdio.h>
using namespace std;
int main()
{
    double r;
    double pi=3.14;
    scanf("%f",&r);
    if(r<0)
        return 0;
    else
    {
        double c=2*pi*r;
        double s=pi*r*r;
        printf("%.2f",c);
        printf("%.2f",s);
    }



}
