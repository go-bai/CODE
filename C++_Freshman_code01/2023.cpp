//�ö�ά����洢ѧ���ɼ������

#include<stdio.h>
double a[55][10],b[55],c[10];
int main()
{
    int m,n;
    while(scanf("%d%d",&n,&m) != EOF)
    {
        int i,j;
        double stud1;
        for(j = 0; j < n; j++)
            for(i = 0; i < m; i++)
                scanf("%lf",&a[j][i]);
        for(j = 0; j < n; j++)
        {
            stud1 = 0;   //��¼ÿ���˵��ܳɼ�
            for(i = 0; i < m; i ++)
                stud1 += a[j][i];
            b[j] = stud1/m;
        }
        for(i = 0; i < m; i++)
        {
            double stud2 = 0;   //��¼ÿ���γ̵��ܳɼ�
            for(j = 0; j < n; j++)
                stud2 += a[j][i];
            c[i] = stud2/n;     //��¼ÿ���γ�ƽ���ɼ�
        }
        int good = 0;           //���ÿһ�γɼ�����ƽ���ɼ�
        for(j = 0; j < n; j++)
        {
            int t = 1;          //t������������������
            for(i = 0; i < m; i++)
                if(a[j][i] < c[i])
                {
                    t = 0;
                    break;
                }
            if(t)
                good ++;
        }
        printf("%.2lf",b[0]);
        for(i = 1; i < n; i ++)
            printf(" %.2lf",b[i]);
        printf("\n");
        printf("%.2lf",c[0]);
        for(int i = 1; i < m; i++)
            printf(" %.2lf",c[i]);
        printf("\n");
            printf("%d\n",good);
        printf("\n");
    }
    return 0;
}

/*
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,m;//n��ѧ����m���γ�
    cin>>n>>m;
    double arrn[10],arrm[10];
    double parrn[10],parrm[10];
    int lcount=1;
    int su=n*m;
    double nmsum[10];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>nmsum[lcount];
            lcount++;
        }
    }

    int a=1;
    int j;
    for(int i=1; i<=su; i+=m)
    {
        int bcount=1;
        for(j=i; bcount<=m; j++)
        {
            parrn[a]+=nmsum[j];
            bcount++;
            //cout<<nmsum[j]<<endl;
        }
        parrn[a]/=m;
        if(i==1)
            cout<<fixed<<setprecision(2)<<parrn[a];
        else
            cout<<" "<<parrn[a];

        a++;

    }
    cout<<endl;





}
*/

/*

int j=1;
    int i=1;
    for(int i=1; i<=su; )
    {
        for(j; j<=su; )
        {
            arrm[i]+=nmsum[j];
        }
        j+=n;
        parrm[i]/=n;
        if(i==1)
            cout<<parrn[i];
        else
            cout<<parrn[i]<<" ";
        i+=n;
    }


*/
/*
for(int i=1; i<=m; i++ )
    {
        for(j=i; j<=su; j+=n)
        {
            arrm[i]+=nmsum[j];
        }
        j+=n;
        parrm[i]/=n;
        if(i==1)
            cout<<parrn[i];
        else
            cout<<" "<<parrn[i];

    }
    cout<<endl;
    int acount=0;
    int ij=1;
    for(int i=1; i<=su; i+=n)
    {
        int countl=1;
        int flag=1;
        for(j=i; countl<=n; j++)
        {
            if(nmsum[i]<parrm[ij])
            {
                flag=0;
                break;
            }
            countl++;
        }
        if(flag==1)
        {
            acount++;
        }
        ij++;
    }
    cout<<acount;
*/
