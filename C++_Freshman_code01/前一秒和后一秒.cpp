#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int h,m,s;
    scanf("%d:%d:%d",&h,&m,&s);
    int qh=h,qm=m,qs=s;
    int hh=h,hm=m,hs=s;
    if(qs==0)
    {
        qs=59;
        if(qm==0)
        {
            qm=59;
            if(qh==0)
                qh=23;
            else
                qh-=1;
        }
        else
            qm-=1;
        printf("%02d:%02d:%02d\n",qh,qm,qs);
    }
    else
        printf("%02d:%02d:%02d\n",qh,qm,qs-1);

    if(hs==59)
    {
        hs=0;
        if(hm==59)
        {
            hm=0;
            if(hh==23)
                hh=0;
            else
                hh+=1;
        }
        else
            hm+=1;
        printf("%02d:%02d:%02d\n",hh,hm,hs);
    }
    else
        printf("%02d:%02d:%02d\n",hh,hm,hs+1);

}
