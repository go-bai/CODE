#include<iostream>
#include<algorithm>
using namespace std;
const int INF=0x3f3f3f3f;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[100010];
    int brr[100010];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }
    sort(arr,arr+n);
    if(k==1)
        cout<<arr[0]<<endl;
    else if(k==2)
    {
        int lcount=1;
        int mi;
        for(int flag=1; flag<n; flag++)
        {
            int min1=INF,min2=INF;
            for(int i=0; i<flag; i++)
            {
                min1=min(brr[i],min1);
            }
            for(int j=flag; j<n; j++)
            {
                min2=min(brr[j],min2);
            }
            mi=max(min1,min2);
        }
        cout<<mi<<endl;
    }
    else if(k>=3)
        cout<<arr[n-1]<<endl;
}
