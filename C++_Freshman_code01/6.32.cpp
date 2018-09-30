#include<stdio.h>
#include<string.h>
int jc[11]= {1,1,2,6,24,120,720,5040,40320,326880,3268800};

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
            c1[i]=1.0/jc[i];
        }

        for(int i=2; i<=n; i++)
        {
            for(int j=0; j<=m; j++)
            {
                for(int k=0; k<=num[i]&&k<=m; k++)
                    c2[j+k]+=c1[j]/jc[k];
            }
            for(int j=0; j<=m; j++)
            {
                c1[j]=c2[j];
                c2[j]=0;
            }
        }
        printf("%.0lf\n",jc[m]*1.0*c1[m]);

    }
}
