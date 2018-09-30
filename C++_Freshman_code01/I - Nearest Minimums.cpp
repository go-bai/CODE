#include<iostream>
using namespace std;
int main()
{
    int n,mi=1e9;
    int num[100010];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
        if(num[i]<mi)
            mi=num[i];
    }
    //cout<<mi;
    int mimi=1e5;
    int lcount[100];
    int bcount=0;
    for(int i=0;i<n;i++)
    {
        if(num[i]==mi)
        {
            lcount[bcount]=i;
            bcount++;
        }
    }
    for(int i=0;(i+1)<bcount;i++)
    {
        if((lcount[i+1]-lcount[i])<mimi)
            mimi=(lcount[i+1]-lcount[i]);
    }
    cout<<mimi<<endl;
}
