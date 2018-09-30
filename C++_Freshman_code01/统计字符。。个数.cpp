#include <iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int letter=0,blank=0,digit=0,other=0;
    char a[1000];
    cout<<"Input 10 characters: ";
    gets(a);
    int len=strlen(a);
    for(int i=0; i<=len; i++)
    {

        if(((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z')))
            letter++;
        else if(a[i]==' ')
            blank++;
        else if(a[i]>='0'&&a[i]<='9')
            digit++;
        else //if(a[i]=='#')
            other ++;

    }
    cout<<"letter="<<letter<<",blank="<<blank<<",digit="<<digit<<",other="<<other;

    return 0;
}
