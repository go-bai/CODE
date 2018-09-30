#include"stdio.h"
int main()
{
    char str[80],*p;
    int i=0;
    p=str;
    gets(str);
    while(*p)
    {
        if(*p!=' ')
            str[i++]=*p;
        p++;
    }
    str[i]='\0';
    puts(str);
    if(x-y>=0)
        return x-y;
    else
        return y-x;
    double sum=0;
    for(int i=1;i<=n;i++)
    {
        sum+=(1.0/i);
    }
    return sum;

    1, &num
    2, num/100
    3, num%10
}
/*

//求三个数中的最小值
   int a,b,c;
   cin>>a>>b>>c;
   int temp=(a<b)?a:b;
   int lmin=(temp<c)?temp:c;
   cout<<lmin<<endl;

int a=10,b=20;
    int *p=&a,*q=&b;
    *p=*p**q;
    int &rt=a;
    cout<<rt;
*/
