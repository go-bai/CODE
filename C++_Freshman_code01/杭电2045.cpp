#include<iostream>
#include<cstdio>
using namespace std;
__int64 color(int n)
{
    __int64 arr[51];
    arr[0]=3;
    arr[1]=6;
    arr[2]=6;
    for(int i=3; i<n; i++)
    {
        arr[i]=arr[i-2]*2+arr[i-1];
    }
    return arr[n-1];
}
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<color(n)<<endl;
    }
}

/*
#include <stdio.h>
int main()
{
    __int64 n;
    __int64 a[125];
    a[1]=3;
    a[2]=6;
    a[3]=6;
    for (int i=4;i<=65;i++)
    {
        a[i]=a[i-1]+a[i-2]*2;
    }
    while (scanf ("%d",&n)!=EOF)
    {
        printf ("%I64d\n",a[n]);
    }
    return 0;
}
#include <iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==1)
        {
            cout<<"3"<<endl;
            continue;
        }
        long long x = 2;
        long long rear = 0;
        for(int i = 1 ; i < n-1; ++i)
        {
            rear = x-rear;
            x<<=1;
        }
        cout<<3*(x-rear)<<endl;
    }
    return 0;
}
*/



