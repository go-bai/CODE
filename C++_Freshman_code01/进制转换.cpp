#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int num;
    int i,j,k,change=0;
    cout<<"����Ҫת����������"<<endl;
    cin>>num;
    int n=num;
    j=0;
    while(n)
    {
        j++;
        i=n%2;
        n=n/2;
        for(k=1; k<j; k++)
            i=i*10;
        change=change+i;
    }
    cout<<num<<"ת���ɶ�����Ϊ��"<<change<<endl;
    return 0;
}
