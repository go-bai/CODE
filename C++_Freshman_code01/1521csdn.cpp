#include<stdio.h>
#include<string.h>
int jc[11]= {1,1,2,6,24,120,720,5040,40320,326880,3268800};
///�������ڴ洢��0��10�Ľ׳�
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
            c1[i]=1.0/jc[i];///�����һ����Ʒ���ڲ�ͬ�����������
        }

        for(int i=2; i<=n; i++)///����ӵڶ�����Ʒ��ʼ
        {
            for(int j=0; j<=m; j++)///Ŀǰ�Ѿ����ڵ���Ʒ�����϶�С��m
            {
                for(int k=0; k<=num[i]&&k<=m; k++)///Ҫ�ӵ�ǰ�ĵ�i����Ʒ��ȡ�����ĸ���
                    c2[j+k]+=c1[j]/jc[k];///�����γɵ�һ��������
            }
            for(int j=0; j<=m; j++)
            {
                c1[j]=c2[j];///c1�洢�������յ�ȷ��ֵ��c2��ˢ�¼���
                c2[j]=0;
            }
        }
        printf("%.0lf\n",jc[m]*1.0*c1[m]);

    }
}
