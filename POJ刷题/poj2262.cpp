#include<cstdio>
#include<cmath>
#include<cstring>
const int maxn=1000000+10;
bool prime[maxn];
void is_prime(){
    int m=sqrt(maxn+0.5);
    memset(prime,true,sizeof prime);
    for(int i=2;i<=m;i++) if(prime[i])
        for(int j=i*i;j<=maxn;j+=i) prime[j]=false;
}
using namespace std;
int main()
{
    int n;
    is_prime();
    while(scanf("%d",&n)!=EOF&&n){
        for(int i=2;i<n;i++){
            if(prime[i]&&prime[n-i]){
                printf("%d = %d + %d\n",n,i,n-i);
                break;
            }
        }
    }
    return 0;
}
