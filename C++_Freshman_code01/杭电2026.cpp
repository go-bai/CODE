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
        a[0]=toupper(a[0]);//toupper�����ǽ�Сд��ĸת���ɴ�д��ĸ��tolower�����ǽ���д��ĸת����Сд��ĸ��
        for(i=1;i<len;i++)
        {
            if(a[i-1]==' '&&a[i]!=' ')
            a[i]=toupper(a[i]);
        }
        puts(a);//gets����һ��ַ��ʼ��������洢��Ԫ�е��ַ���������һ��'\0'����ʱ������������Զ����� ��
    }
    return 0;
}
