#include<iostream>
#include<stack>
using namespace std;
int main()//利用栈的先进后出 的特性
{
    int n;
    int r;
    stack<char>s;
    while(cin>>n>>r)
    {
        bool flag=true;
        if(n<0)
        {
            flag=false;
            n=-n;
        }
        while(n>0)
        {
            int temp=n%r;
            n/=r;
            if(temp>9)
            {
                temp=temp-10+'A';
            }
            else
            {
                temp=temp+'0';
            }
            s.push(temp);
        }
        if(!flag)
        {
            s.push('-');
        }
        while(!s.empty())
        {
            cout<<s.top();
            s.pop();
        }
        cout<<endl;


    }
    return 0;
}


/*
int transformation(int n,int r)
{
    int nn=0;
    int temp;
    int lcount=0;
    while(n>0)
    {
        temp=n%r;
        if(temp>=10)
        n/=r;
        for(int i=0;i<lcount;i++)
        {
            temp*=10;
        }
        nn+=temp;
        lcount++;
    }
    return nn;
}
int main()
{
    int n;//十进制数
    int r;
    cin>>n>>r;
    cout<<transformation(n,r);
    //while(cin>>n&&cin>>r)
    //{

   // }

}


*/
