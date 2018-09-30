#include<cstdio>
int main()
{
    int arr[13]= {0,31,28,31,30,31,30,31,31,30,31,30,31},y,m,d,sum;
    while(scanf("%d/%d/%d",&y,&m,&d)!=EOF)
    {
        sum=0;
        if(y%400==0||(y%4==0&&y%100!=0))
            arr[2]=29;
        for(int i=1; i<m; i++)
            sum+=arr[i];
        printf("%d\n",sum+d);
        arr[2]=28;
    }

}
