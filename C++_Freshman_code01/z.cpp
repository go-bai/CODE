#include <iostream>//7-28
#include <cstdlib>
#include <ctime>
using namespace std;
bool qz(int [][8],int,int,int [],int [],int [],int [],int);
void printer(int [][8],int [],int [],int);
void printer1(int [][8],int,int,int [],int [],int);


int main(void)
{
    int row=3,col=4;                //���ʼ����
    int a[8][8]= {0};               //��ά��������
    int b[65]= {0},c[65]= {0};      //��¼ÿһ���ߵ�ͨ��x,y����
    int h[8]= {2,1,-1,-2,-2,-1,1,2};   //�������Ҫ�ߵ�ˮƽֵ
    int v[8]= {-1,-2,-2,-1,1,2,2,1};   //�������Ҫ�ߵĴ�ֱֵ
    int value=1;                    //��ǰ����
    a[row][col]=1;                    //�����ϵ�λ����1
    b[value]=row;
    c[value]=col;        //��¼��һ������
    printer1(a,row,col,b,c,value);    //��ʾ��һ����֤

    b[value]=row;
    c[value]=col;        //��¼��һ��x,y����ֵ
    bool flag=qz(a,row,col,b,
                 c,h,v,value);
    printer(a,b,c,value);
    return 0;
}

bool qz(int a[][8],int row,int col,int b[],int c[],int h[],int v[],int value)
{
    if(value==64)
        return true;
    bool flag;
    int frow=0,fcol=0;
    for(int i=0; i<8; ++i)
    {
        frow=row+v[i];
        fcol=col+h[i];
        if(frow<8 && fcol<8 && frow>=0 && fcol>=0 && a[frow][fcol]==0)//Ҫ�ߵ�λ���Ƿ���������?
        {
            value++;                        //����+1
            row=frow;
            col=fcol;                //���ƶ��ߵ�ͨ��λ��
            b[value]=row;
            c[value]=col;        //�������ߵ�ͨ������
            a[row][col]=1;                    //����ǰλ����������λ��λ����1
            printer1(a,frow,fcol,b,c,value);
            flag=true;

            //��������굱������������
            flag=qz(a,row,col,b,c,h,v,value);
            cout<<row<<"  "<<col <<endl;        //��������row��col���0

        }
        else
        {
            frow=row;
            fcol=col;
        }

    }

    if(i>=8)    //������������ʾ��ǰ����8�������߲�ͨ
    {
        row=b[value-1];
        col=c[value-1];    //��ԭǰһ������
    }

}


void printer(int a[][8],int b[],int c[],int value)
{
    for(int i=1; i<65; i++)
    {
        cout<<"���� "<<i<<" =["<<b[i]<<","<<c[i]<<"]"<<endl;
    }
}


void printer1(int a[][8],int frow,int fcol,int b[],int c[],int value)
{
    cout<<"row="<<frow<<"    "<<"col="<<fcol<<endl;
    cout<<"���� "<<value<<" =["<<b[value]<<","<<c[value]<<"]"<<endl;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; ++j)
        {
            cout<< a[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl;
}
