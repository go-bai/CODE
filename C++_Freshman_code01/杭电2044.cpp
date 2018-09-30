#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        int a,b;
        cin>>a>>b;
        int m=b-a;
        unsigned long long arr[101];
        arr[1]=1;
        arr[2]=2;
        for(int i=3;i<=m;i++)
        {
            arr[i]=arr[i-1]+arr[i-2];
        }
        cout<<arr[m]<<endl;
        n--;
    }
}
