#include<stdio.h>
#include<string.h>
int jc[11]= {1,1,2,6,24,120,720,5040,40320,326880,3268800};
///数组用于存储从0到10的阶乘
int num[12];
double c1[110],c2[110];
int main()
{
    int n,m;
    while(~scanf("%d%d",&n,&m))
    {
        memset(c1,0,sizeof(c1));
        memset(c2,0,sizeof(c2));
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&num[i]);
        }
        for(int i=0; i<=num[1]; i++)
        {
            c1[i]=1.0/jc[i];///计算第一种物品存在不同个数的组合数
        }

        for(int i=2; i<=n; i++)///下面从第二种物品开始
        {
            for(int j=0; j<=m; j++)///目前已经存在的物品数，肯定小于m
            {
                for(int k=0; k<=num[i]&&k<=m; k++)///要从当前的第i种物品中取出来的个数
                    c2[j+k]+=c1[j]/jc[k];///最终形成的一个排列数
            }
            for(int j=0; j<=m; j++)
            {
                c1[j]=c2[j];///c1存储的是最终的确定值，c2在刷新计算
                c2[j]=0;
            }
        }
        printf("%.0lf\n",jc[m]*1.0*c1[m]);

    }
}
