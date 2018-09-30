#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int temp;
    if(num>=0)
        temp=num;
    else
        temp=-1*num;
    int newnum=0;
    int lcount=0;
    int yu=1;
    while(temp>0)
    {
        if((temp%10)%2!=0)
        {
            for(int i=0; i<lcount; i++)
                yu*=10;
            yu*=temp%10;
            newnum+=yu;
            yu=1;
            lcount++;
        }
        temp/=10;
    }
    if(num>=0)
        cout<<newnum;
    else
        cout<<-1*newnum;
}
