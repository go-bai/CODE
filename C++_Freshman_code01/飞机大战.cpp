#include<stdio.h>
#include<windows.h>
#include<conio.h>
//����ȫ�ֱ���
int high,width;						//����߽�
int position_x,position_y;			//�ɻ�λ��
int bullet_x,bullet_y;				//�ӵ�λ��
int enemy_x,enemy_y;
int score;
int flag;							//�ɻ�״̬
void gotoxy(int x,int y)  			//����ƶ���(x,y)λ��
{
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(handle,pos);
}
void HideCursor() // �������ع��
{
    CONSOLE_CURSOR_INFO cursor_info = {1, 0};  // �ڶ���ֵΪ0��ʾ���ع��
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursor_info);
}


void startup()						//���ݳ�ʼ��
{
    high=18;
    width=26;

    position_x=high-3;
    position_y=width/2;

    bullet_x=0;
    bullet_y=position_y;

    enemy_x=0;
    enemy_y=position_y;

    score=0;

    flag=0;							//�ɻ����

    HideCursor();
}
void show()							//��ʾ����
{
    int i,j;
    for(i=0; i<high; i++)
    {
        for(j=0; j<width; j++)
        {
            if(flag)
                break;

            else if((i==position_x)&&(j==position_y))		//�ɻ�����
                printf("-");
            else if((i==enemy_x)&&(j==enemy_y))				//�л�����
                printf("+");
            else if((i==bullet_x)&&(j==bullet_y))			//�ӵ�����
                printf("|");
            else if ((j==width-1)||(i==high-1)||(j==0)||(i==0))				//��ӡ�߽�
                printf("#");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    if((position_x==enemy_x)&&(position_y==enemy_y))
    {
        flag=1;							//�ɻ�ײ�� ��Ϸ����
        printf("�÷�: %d\n",score);
        printf("��Ϸ����");
    }
    else
        printf("�÷�: %d\n",score);
}
void withoutInpute()						//���û������޹�
{
    if(bullet_x>0)							//�ӵ�����Ч��
        bullet_x--;
    if((bullet_x==enemy_x)&&(bullet_y==enemy_y))		//�ӵ����ел�
    {
        score++;
        bullet_x=-1;
        enemy_x=1;
        enemy_y=2+rand()%width-2;
    }


    static int speed;
    if(speed<30)					//�����л��ٶȣ���Ӱ��ɻ����ӵ��ٶ�
        speed++;
    if(speed==30)
    {
        if(enemy_x<high)
            enemy_x++;
        else
        {
            enemy_x=0;
            enemy_y=2+rand()%width-2;
        }
        speed=0;
    }




}
void withInpute()						//���û������й�
{
    char input;
    if(kbhit())										//���Ʒɻ�����
    {
        input=getch();
        if((input=='w')&&position_x>1)
            position_x--;
        if((input=='s')&&position_x<high-2)
            position_x++;
        if((input=='a')&&position_y>1)
            position_y--;
        if((input=='d')&&position_y<width-2)
            position_y++;
        if(input==' ')
        {
            bullet_x=position_x-1;
            bullet_y=position_y;
        }
    }
}
int main()
{
    system("color 2f");
    startup();					// ���ݳ�ʼ��
    while(1)					//  ��Ϸѭ��ִ��
    {
        gotoxy(0,0);
        show();					// ��ʾ����
        withoutInpute();		// ���û������޹صĸ���
        withInpute();			// ���û������йصĸ���
    }


}
