#include "stdio.h"
typedef struct
{
    int flag;/*标志位*/
    int no;
} Inta;
main()
{
    Inta aa[10];
    int i,j;
    for(i=0; i<10; i++)
    {
        aa[i].flag=0;
        printf("请输入第%d个整数：\n",i+1);
        scanf("%d",&aa[i].no);
        for(j=0; j<i; j++)
        {
            if(aa[i].no==aa[j].no)/*如果两次出现，flag=1*/
            {
                aa[i].flag=aa[j].flag=1;
                break;
            }
        }
    }
    printf("只出现过一次的整数有：\n");
    for(i=0; i<10; i++)
    {
        if(aa[i].flag==0)
        {
            printf("%d\t",aa[i].no);
        }
    }
    printf("\n");
}
