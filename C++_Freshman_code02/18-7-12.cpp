#include<bits/stdc++.h>
using namespace std;
const int M = 110;
int main() {
    int n;
    char a[M][M],b[10050];
    while(cin>>n) {
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                cin>>a[i][j];
            }
        }
        int k = 1;
        for(int i=1; i<=n; i++) {
            int i1 = i;
            if(i1%2==1) {
                for(int j=0; j<i1; j++) {
                    b[k++] = a[i1-j][1+j];
                    //cout<<b[k-1]<<" ";
                }
            } else {
                for(int j=0; j<i1; j++) {
                    b[k++] = a[j+1][i1-j];
                    //cout<<j+1<<" "<<i1-j<<" "<<a[j+1][i1-j]<<endl;
                }
            }
        }
        //for(int i=1;i<=n*n;i++)
        //cout<<b[i];
        //  cout<<endl;
        if(n%2==1) {
            for(int i=2; i<=n; i++) {
                if(i%2==0) {
                    for(int j=0; j<=n-i; j++) {
                        b[k++] = a[i+j][n-j];
                    }
                } else {
                    for(int j=0; j<=n-i; j++) {
                        b[k++] = a[n-j][i+j];
                    }
                }
            }
        } else {
            for(int i=2; i<=n; i++) {
                if(i%2==1) {
                    for(int j=0; j<=n-i; j++) {
                        b[k++] = a[i+j][n-j];
                    }
                } else {
                    for(int j=0; j<=n-i; j++) {
                        b[k++] = a[n-j][i+j];
                    }
                }
            }
        }
        /*for(int i=1;i<=n*n;i++)
            cout<<b[i];
        cout<<endl;*/
        k=1;
        int x=1,y=1;
        int vis[110][110];
        int c[10050];
        memset(vis,0,sizeof(vis));
        memset(a,0,sizeof(a));
        while(1) {
            //cout<<x<<endl;
            for(int i=1; i<=n; i++) {
                if(vis[x][i]==0) {
                    //cout<<x<<" "<<i<<endl;
                    vis[x][i]=1;   //就是这里卡了一万年的 == 。
                    //cout<<vis[x][i];
                    a[x][i]=b[k++];
                    //cout<<a[x][i];
                    y = i;
                }
            }
            for(int i=2; i<=n; i++) {
                if(vis[i][y]==0) {
                    vis[i][y]=1;
                    a[i][y]=b[k++];
                    //cout<<a[i][y];
                    x = i;
                }
            }
            //cout<<endl;
            for(int i=n-1; i>=1; i--) {
                if(vis[x][i]==0) {
                    vis[x][i] = 1;
                    a[x][i] = b[k++];
                    //cout<<a[x][i];
                    y=i;
                }

            }
            //cout<<endl;
            for(int i=n-1; i>=2; i--) {
                if(vis[i][y]==0) {
                    vis[i][y]=1;
                    a[i][y] = b[k++];
                    //cout<<a[i][y];
                    x=i;
                }
            }
            //cout<<endl;
            if(k==n*n+1) break;
        }
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=n; j++) {
                cout<<a[i][j];
            }
            cout<<endl;
        }
    }
}
