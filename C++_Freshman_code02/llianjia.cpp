#include<iostream>
#include<stdio.h>
using namespace std;
int text01()
{
    printf("%.1f",8.0/5.0);
    return 0;
}
int text02()
{
}
int main()
{
    int n;
    int j=0;
    int sum=0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        j+=i;
        sum+=j;
    }
    cout<<sum<<endl;
    int a=text01();
    cout<<a;
}
