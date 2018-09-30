#include<iostream>
#include<stdio.h>
using namespace std;
int lcount(char * str)
{
    int i,num=0;
    for(i=0;str[i];i++)
    {
        if((str[i]>='a'&&str[i]<='z')||(str[i]<='Z'&&str[i]>='A'))
        {
            num++;
        }

    }
    return num;
}
int main()
{
    char text[100];
    cout<<"请输入一个英语句子"<<endl;
    gets(text);
    cout<<"这个句子里面有"<<lcount(text)<<"个字母。"<<endl;
}
