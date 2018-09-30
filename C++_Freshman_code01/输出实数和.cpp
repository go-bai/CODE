#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main()
{
    double n;
    cin>>n;
    double arr[100];
    arr[0]=0;
    arr[1]=0;
    arr[2]=1;
    double sum=0;
    for(int i=3;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
    }
    for(int i=0;i<n;i++)
    {
        sum+=sqrt(arr[i]);
    }
    cout<<fixed<<setprecision(6)<<sum;
}
