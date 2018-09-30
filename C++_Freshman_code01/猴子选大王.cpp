#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n,m,q;
    cin>>n>>m>>q;
    int lcount=0;
    for(int i=1;i<=n;i++)
    {
        arr[i]=1;
    }
    int sum=0;

    while(lcount!=n-1)
    {
        for(int i=q;i<=n;i++)
        {
            sum+=arr[i];
            if(sum==m)
            {
                arr[i]=0;
                sum=0;
                lcount++;
                //cout<<"----"<<endl;
            }
        }
        q=1;
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[i]==1)
            cout<<i;
    }

}
/*
int a()
{
    int arr[1000];
    int n,m,q;
    int lcount=0;
    int bcount=0;
    cin>>n>>m>>q;
    for(int i=1; i<=n; i++)
    {
        arr[i]=1;
    }
    while(lcount!=n-1)
    {
        int flag=0;
        for(int i=q; i<=n; i++)
        {
            if(arr[i]==1)
                bcount++;
            if(bcount==m)
            {
                lcount++;
                bcount=0;
                arr[i]=0;
                if(i==n)
                    q=1;
                else
                    q=i+1;
                flag=1;
                break;
            }

        }
        if(flag==1)
            continue;
        for(int i=1; i<q; i++)
        {
            if(arr[i]==1)
                bcount++;
            if(bcount==m)
            {
                lcount++;
                bcount=0;
                arr[i]=0;
                if(i==n)
                    q=1;
                else
                    q=i+1;
                //cout<<"------"<<endl;
                break;
            }
        }
    }
    for(int i=1; i<=n; i++)
    {
        if(arr[i]==1)
            cout<<i;
    }
}

*/
