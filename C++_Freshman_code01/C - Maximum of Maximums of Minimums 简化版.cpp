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
        cout<<max(brr[0],brr[n-1]);
    }
    else if(k>=3)
        cout<<arr[n-1]<<endl;
}
