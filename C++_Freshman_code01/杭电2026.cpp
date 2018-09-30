#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char a[110];
    int len,i;
    while(gets(a)!=NULL)
    {
        len=strlen(a);
        a[0]=toupper(a[0]);//toupper函数是将小写字母转换成大写字母，tolower函数是将大写字母转换成小写字母。
        for(i=1;i<len;i++)
        {
            if(a[i-1]==' '&&a[i]!=' ')
            a[i]=toupper(a[i]);
        }
        puts(a);//gets从这一地址开始依次输出存储单元中的字符，遇到第一个'\0'符号时结束输出，并自动换行 。
    }
    return 0;
}
