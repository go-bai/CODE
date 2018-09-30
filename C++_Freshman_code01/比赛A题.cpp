#include "bits/stdc++.h"
using namespace std;
const int N = 5000;
typedef long long ll;
const ll p = 1e9 + 7;
ll f[N][N][2];
int n;
int main()
{
    scanf("%d", &n);
    f[1][0][0] = 1;
    for(int i = 2 ; i <= n ; ++ i)
    {
        for(int jjj = -1000 ; jjj <= 1000 ; ++ jjj)
        {
            int j = jjj + 1000;
            for(int k = 0 ; k <= 1 ; ++ k)
            {
                // a[i] / a[i - 1] = 1
                ll t1 = f[i - 1][j][k];

                // a[i] / a[i - 1] = -2
                ll t2 = f[i - 1][j - 1][!k];

                // a[i] / a[i - 1] = 0.5
                ll t3 = f[i - 1][j + 1][k];

                f[i][j][k] = (f[i][j][k] + t1) % p;
                f[i][j][k] = (f[i][j][k] + t2) % p;
                f[i][j][k] = (f[i][j][k] + t3) % p;
            }
        }
    }
    ll ans = (f[n][0][0] % p + p) % p;
    printf("%lld\n", ans);
}
