#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    int arrn[100];
    int arrm[100];
    int arr[100];
    while(cin>>n>>m)
    {
        int flag=1;
        if(n==0&&m==0)
            break;
        for(int i=0; i<n; i++)
            cin>>arrn[i];
        for(int i=0; i<m; i++)
            cin>>arrm[i];
        int lcount=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(arrn[i]==arrm[j])
                {
                    flag=0;
                }
            }
            if(flag)
            {
                arr[lcount]=arrn[i];
                lcount++;
            }
            flag=1;
        }
        if(lcount==0)
            cout<<"NULL"<<endl;
        else
        {
            sort(arr,arr+lcount);
            for(int i=0; i<lcount; i++)
            {
                cout<<arr[i]<<" ";

            }
            cout<<endl;
        }

    }
}
