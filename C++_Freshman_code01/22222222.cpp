#include<iostream>
using namespace std;
int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        int c[100];//Å¼Êý¼¯
        c[0]=2;
        for(int p=1;p<=100;p++)
        {
            c[p]=c[p-1]+2;
        }
        int b[100];
        int p=0;
        int sum=0;
        int j;

        for(int i=0; i<n-n%m; i+=m)
        {
            j=i;
            for(j;j<=i+m;j++)
            {
                sum+=c[j];
            }
            b[j]=c[j];
        }

        for(int l=1; l<=n/m; l++)
        {
            cout<<b[j]/m<<" ";
        }
        if(n/m==0)
            cout<<endl;
        else
        {
            sum=0;
            for(int k=n;k>n-n%m;k--)
            {
                sum+=c[k];
            }
            cout<<sum/(n%m)<<endl;
        }
    }
}
