#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int result_f(int f)
{
    if(f==1)
        cout<<"No,Please try again.";
    else if(f==2)
        cout<<"Wrong,Try one more.";
    else if(f==3)
        cout<<"Don't give up!";
    else if(f==4)
        cout<<"No,Keep trying.";
}
int result_t(int t)
{
    if(t==1)
        cout<<"Very good!";
    else if(t==2)
        cout<<"Excellent";
    else if(t==3)
        cout<<"Nice work";
    else if(t==4)
        cout<<"Keep up the good work!";
}
int text(int& lcount,int& lfalse)//��lcount���ã������ʽ��
{
    if(lcount==10)
    {
        cout<<endl<<"---------------------------------"<<endl;
        if(lfalse>2)
        {
            cout<<"Please ask your instructor for extra help!";
            lcount=11;//lcount=11;//�����Ƿ��������
        }
        else
        {
            cout<<"You are the best!";
            lcount=0;
        }
    }
}
int main()
{
    int a,b,c,t,f,product;
    int ltrue=0,lfalse=0,lcount=0,lbreak=0;
    for(;;)
    {
        if(lcount==11)//���Ϊ�棬��������
            break;
        srand(time(NULL));
        a=rand()%9+1;
        b=rand()%9+1;
        t=rand()%4+1;//true
        product=a*b;
        cout<<a<<"*"<<b<<"=";
        cin>>c;
        lcount++;
        if(c!= product)
        {
            lfalse++;
            f=rand()%4+1;//false
            ///////////////////////////////////////////
            result_f(f);                           //��
            text(lcount,lfalse);                   //��
            cout<<endl;                            //��
            ///////////////////////////////////////////
            for(;;)
            {
                f=rand()%4+1;//false
                cout<<a<<"*"<<b<<"=";
                cin>>c;
                if(c!= product)
                {
                    ///////////////////////////////////////////
                    result_f(f);                           //��
                    text(lcount,lfalse);                   //��
                    cout<<endl;                            //��
                    ///////////////////////////////////////////
                }
                else
                {
                    ///////////////////////////////////////////
                    result_t(t);                           //��
                    text(lcount,lfalse);                   //��
                    cout<<endl;                            //��
                    ///////////////////////////////////////////
                    break;
                }
            }
        }
        else
        {
            ///////////////////////////////////////////
            result_t(t);                           //��
            text(lcount,lfalse);                   //��
            cout<<endl;                            //��
            ///////////////////////////////////////////
        }
    }
}
