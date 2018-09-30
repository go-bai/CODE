#include<iostream>
using namespace std;
int main()
{
    int n,m;

    while(cin>>n>>m)
    {
        int lcount=0;
        if(n==0&&m==0)
            break;
        else
        {

            int arr[100];
            for(int i=0;i<n;i++)
            {
                cin>>arr[i];
            }


            for(int i=0;i<n;i++)
            {
                if(arr[i]>=m)
                {
                    for(int j=n;j>i;j--)
                    {
                        arr[j]=arr[j-1];
                        //cout<<"--"<<j<<"--"<<arr[j]<<"--"<<endl;
                    }
                    arr[i]=m;
                    break;
                }
            }
            for(int i=0;i<=n;i++)
            {
                if(lcount>0)
                    cout<<" ";
                cout<<arr[i];
                lcount++;
            }
        }
        cout<<endl;
    }
}
