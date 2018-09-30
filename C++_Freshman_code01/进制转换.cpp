#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int num;
    int i,j,k,change=0;
    cout<<"输入要转换的整数："<<endl;
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
    cout<<num<<"转换成二进制为："<<change<<endl;
    return 0;
}
