#include "stdio.h"
typedef struct
{
    int flag;/*��־λ*/
    int no;
} Inta;
main()
{
    Inta aa[10];
    int i,j;
    for(i=0; i<10; i++)
    {
        aa[i].flag=0;
        printf("�������%d��������\n",i+1);
        scanf("%d",&aa[i].no);
        for(j=0; j<i; j++)
        {
            if(aa[i].no==aa[j].no)/*������γ��֣�flag=1*/
            {
                aa[i].flag=aa[j].flag=1;
                break;
            }
        }
    }
    printf("ֻ���ֹ�һ�ε������У�\n");
    for(i=0; i<10; i++)
    {
        if(aa[i].flag==0)
        {
            printf("%d\t",aa[i].no);
        }
    }
    printf("\n");
}
