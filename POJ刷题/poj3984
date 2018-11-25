#include<cstdio>
#include<utility>
#include<queue>
using namespace std;
const int maxn=5;
const int BLOCK=1;
int mp[maxn][maxn];
pair<int,int>path[maxn][maxn];
int dx[]={-1,1,0,0};//上下左右
int dy[]={0,0,-1,1};
inline bool isOK(int x,int y)
{
    return (x>=0&&y>=0&&x<maxn&&y<maxn&&!mp[x][y]);
}
template <typename T>inline bool equ(T t1,T t2){return t1==t2;}
void bfsGetPath(int sx,int sy,int ex,int ey)
{
    queue<pair<int,int> >que;
    path[ex][ey]=make_pair(-1,-1);
    que.push(make_pair(ex,ey));//因为用pair存储路径，所以倒着搜索
    mp[ex][ey]=BLOCK;
    while(!que.empty())
    {
        pair<int,int>ft=que.front();
        que.pop();
        for(int i=0;i<4;i++){
            int nx=dx[i]+ft.first,ny=dy[i]+ft.second;
            if(!isOK(nx,ny)) continue;
            path[nx][ny]=ft;//记录路径
            if(equ(nx,sx)&&equ(ny,sy)) return ;
            que.push(make_pair(nx,ny));
            mp[nx][ny]=BLOCK;
        }
    }
}
int main()
{
    for(int i=0;i<maxn;i++){
        for(int j=0;j<maxn;j++){
            scanf("%d",mp[i]+j);
        }
    }
    bfsGetPath(0,0,4,4);
    int x=0,y=0;
    while(x!=-1){
        printf("(%d, %d)\n",x,y);
        int nx=path[x][y].first,ny=path[x][y].second;
        x=nx;y=ny;
    }
    return 0;
}
