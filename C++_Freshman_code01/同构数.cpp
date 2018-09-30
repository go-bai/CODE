#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int temp=num;
    int numnum=num*num;
    int lcount=0;
    while(temp>0)
    {
        lcount++;
        temp/=10;
    }
    int ling=1;
    for(int i=1;i<=lcount;i++)
        ling*=10;
    if(num==numnum%(ling))
        printf("%d yes,%d*%d=%d",num,num,num,num*num);
    else
        printf("%d no,%d*%d=%d",num,num,num,num*num);
}
