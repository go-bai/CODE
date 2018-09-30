#include<iostream>
#include<cmath>
using namespace std;
int text(int x,int y)
{
    int bcount=0;
    for(int i=x; i<=y; i++)
    {
        int temp=(i*i+i+41);
        for(int j=2; j<=sqrt(temp); j++)
        {
            if(temp%j==0)
            {
                bcount++;

                break;
            }
        }
    }
    return bcount;
}

int main()
{
    int x,y;
    int lcount=0;
    while(cin>>x>>y)
    {
        if(x==0&&y==0)
            break;

        if(text(x,y)>0)
            cout<<"Sorry"<<endl;
        else
            cout<<"OK"<<endl;
    }
}
