#include<iostream>
using namespace std;
void move(int x,int y)
{
    cout<<x<<"->"<<y<<endl;//ִ���ƶ��Ĳ���
}
void hnt(int num,int a,int b,int c)
{
    if(num==1)
        move(a,c);//�ݹ����
    else
    {
        hnt(num-1,a,c,b);
        move(a,c);
        hnt(num-1,b,a,c);
    }


}
int main()
{
    cout<<"������׼���ƶ���������:";
    int num;
    cin>>num;
    hnt(num,1,2,3);

}
