#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
#include<cmath>
//#include<sstream>
using namespace std ;
void hanoi(int n,char a,char b,char c)
{
    if(n>=1)
    {
        hanoi(n-1,a,c,b);
        cout<<a<<"-->"<<c<<endl;
        hanoi(n-1,b,a,c);
    }
}`
int main()
{
    int m;
    cout<<"input the number of diskes:"<<endl;
    cin>>m;
    hanoi(m,'A','B','C');
}





/*
//��ŵ������



//�ݹ�׳�
int fibonacci(int n)
{
    if(n<=2)//��������
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);//ѭ��
}
int main()
{
    cout<<fibonacci(4);
}

void lswap(int &,int &);
int main()
{
    int a=3,b=8;
    cout<<a<<" "<<b<<endl;
    lswap(a,b);
    cout<<a<<" "<<b<<endl;
}
void lswap(int &x,int &y)
{
    int temp=x;
    x=y;
    y=temp;
}

int morencanshu(int a,int b=6);
int main()
{
    cout<<morencanshu(1,1);
}
int morencanshu(int a,int b)
{
    return a+b;
}

����ԭ�͵Ĳ�������Ҫ��������ֻ��Ҫ���ͼ���
void sort(int[],int);

int main()
{
    int i,a[10];
    srand(time(0));
    for(i=0; i<10; i++)
        a[i]=rand()%100;
    for(i=0; i<10; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    sort(a,10);
    for(i=0; i<10; i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void sort ( int x[], int n )
{
    int max, t ;
    for ( int i = 0 ;  i < n-1 ;  i ++ )	    //����������
    {
        t = i ;
        for ( int j = i + 1 ;  j < n ; j ++ )	    //Ѱ�����Ԫ��
            if ( x [ j ] > x [ t ] )  t = j ;
        max = x [ i ] ; 		    //��������Ԫ��
            x [ i ] = x [ t ] ;
            x [ t ] = max ;

    }
    return ;
}

int a[1]={1};
    int *p;
    p=a;
    p++;
������ָ��洢����ĵ�ַ����ָ����мӼ����㣬���ǺϷ������������ܶ�������ֱ�ӽ��м�������
int a[3][4];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            cout<<setw(5)<<a[i][j];
        }
        cout<<endl;
    }
const double pi=3.1415;
    int l[3][4]={{1},{2},{3}};
    cout<<l[2][0];
û�и�ֵ������Ԫ�ػᱻĬ�ϸ�ֵΪ0��
double aa[3]={1.1,2.2,3.3};
    double bb[3]={3.3,4.4,5.5};
    double cc[3]={5.5,6.6,6.6};
    double *pf[3];
    pf[0]=aa;
    pf[1]=bb;
    pf[2]=cc;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)//��ַƫ��
        {
            cout<<*(pf[i]+j)<<" ";
        }
        cout<<endl;
    }
int a=11;
    int b=22;
    int c=33;
    int *pi[3];
    pi[0]=&a;
    pi[1]=&b;
    pi[2]=&c;
    for(int i=0;i<3;i++)
        cout<<*pi[i]<<" ";
int* pi[3];
    double *pf[5];
    char *[10];

int main()
{
    double add1(double,double);//����ԭ��
    double add2(int ,int);//����ԭ��
    double a,b,c;
    cin>>a>>b;
    c=add1(a,b);
    cout<<c<<endl;
    c=add2(1/a,1/b);
    cout<<c<<endl;
}
double add1(double x,double y)
{
    return (x+y);
}
double add2(int i,int j)
{
    return (i+j);
}
*/
