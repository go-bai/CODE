#include<iostream>
#include<cstring>
using namespace std;
const int maxn=8;
char mp[maxn][maxn];
int n,k,ans,vis[maxn];
void dfs(int row,int cnt) {
    if(cnt==k) {
        ans++;
        return ;
    }
    for(int i=row; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(mp[i][j]=='#'&&!vis[j]) {
                vis[j]=1;
                dfs(i+1,cnt+1);
                vis[j]=0;
            }
        }
    }
}
int main() {
    while(cin>>n>>k&&(n!=-1||k!=-1)) {
        memset(vis,0,sizeof vis);
        ans=0;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                cin>>mp[i][j];
        dfs(0,0);
        cout<<ans<<endl;
    }
    return 0;
}
