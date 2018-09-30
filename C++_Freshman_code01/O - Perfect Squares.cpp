#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int n;
    int num[1010];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>num[i];
    }
    sort(num,num+n);
    for(int i=n-1; i>=0; i--)
    {
        if(num[i]<0)
        {
            cout<<num[i]<<endl;
            return 0;
        }
        int pk=sqrt(num[i])+0.5;
        if(pk*pk!=num[i])
        {
            cout<<num[i]<<endl;
            return 0;
        }

    }

}
