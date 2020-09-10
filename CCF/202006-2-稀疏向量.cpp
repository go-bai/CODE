#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
#define LL long long
vector<pair<LL, LL> >ve;
int main() {
    int n, a, b;
    LL index, value;
    // cin >> n >> a >> b;
    scanf("%d%d%d", &n, &a, &b);
    for(int i = 0; i < a; i++) {
        // cin >> index >> value;
        scanf("%lld%lld", &index, &value);
        ve.push_back(make_pair(index, value));
    }
    int j = 0;
    LL ans = 0;
    for(int i = 0; i < b; i++) {
        // cin >> index >> value;
        scanf("%lld%lld", &index, &value);
        for(; j < a; j++) {
            if(index < ve[j].first) break;
            if(index > ve[j].first) continue;
            ans += value * ve[j].second;
        }
    }
    // cout << ans;
    printf("%lld", ans);
    return 0;
}
/*
10 3 4
4 5
7 -3
10 1
1 10
4 20
5 30
7 40

*/