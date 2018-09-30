#include<iostream>
#include<cstdio>
#include<cstdio>
using namespace std;
int main()
{
    int i,j=0;
    char a[]="How are you!",b[10];
    for(i=0; a[i]!=0; i++)

        if(a[i]==' ')
            b[j++]=a[i+1];
        b[j]=0;
        puts(b);

}
