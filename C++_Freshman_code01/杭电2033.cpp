#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        int ah,am,as,bh,bm,bs;
        cin>>ah>>am>>as>>bh>>bm>>bs;
        int h=ah+bh,m=am+bm,s=as+bs;
        if(s>=60)
        {
            m+=1;
            s-=60;
        }
        if(m>=60)
        {
            h+=1;
            m-=60;
        }

        cout<<h<<" "<<m<<" "<<s<<endl;
        n--;
    }
}
