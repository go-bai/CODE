#include<stdio.h>
int main()
{
    int x;
    int sum=0;
    scanf("%d",&x);
    int newx=x;
    int temp=0;
    while(newx!=0)
    {

        temp=temp*10+newx%10;
        newx=newx/10;
        sum++;
    }
    if(sum==3)
        printf("%d",temp);
    else
    {
        printf("%d\n",sum);

    }
}








