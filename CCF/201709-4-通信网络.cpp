#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
const int maxn = 1000 + 5;
vector<int>G[maxn];
int vis[maxn];
bool know[maxn][maxn];
void dfs(int s, int cur) {
    know[s][cur] = know[cur][s] = true;
    vis[cur] = true;
    for(int i = 0; i < G[cur].size(); i++) {
        if(!vis[G[cur][i]]) dfs(s, G[cur][i]);
    }
}
int main() {
    int N, M, a, b;
    scanf("%d%d", &N, &M);
    for(int i = 0; i < M; i++) {
        scanf("%d%d", &a, &b);
        G[a].push_back(b);
    }
    int ans = 0;
    for(int i = 1; i <= N; i++) {
        memset(vis, 0, sizeof(vis));
        dfs(i, i);
    }
    for(int i = 1; i <= N; i++) {
        int cnt = 0;
        for(int j = 1; j <= N; j++) {
            if(know[i][j] == true) cnt++;
        }
        if(cnt == N) ans++;
    }
    printf("%d", ans);
    return 0;
}