#include<stdio.h>
int main()
{
    double a,b,c;
    int n;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        if((a+b)>c && (a+c)>b && (b+c)>a && a>0 && b>0 && c>0) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
