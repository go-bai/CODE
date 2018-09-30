#include<iostream>
using namespace std;
#define ll long long
ll cnt=0;
ll A[1000010];
ll T[1000010];
void merge_sort(ll *A,ll x,ll y,ll *T)
{
    if(y-x>1)
    {
        ll m=x+(y-x)/2;
        ll p=x,q=m,i=x;
        merge_sort(A,x,m,T);
        merge_sort(A,m,y,T);
        while(p<m||q<y)
        {
            if(q>=y||(p<m&&A[p]<=A[q]))
                T[i++]=A[p++];
            else
            {
                T[i++]=A[q++];
                cnt+=m-p;
            }

        }
        for(ll i=x; i<y; i++)
            A[i]=T[i];
    }
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(false);
    ll n;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(ll i=0; i<n; i++)
            cin>>A[i];
        merge_sort(A,0,n,T);
        cout<<cnt<<endl;
        cnt=0;
    }


}
