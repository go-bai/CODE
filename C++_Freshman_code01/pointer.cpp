#include <iostream>
#include <stdlib.h>
using namespace std;
    namespace     myNum          //��д�����ռ�Ĺؼ���
{
    int x = 105;
}
int main(int isOdd)
{
    // ʹ��bool���Ͷ���isOdd����Ϊ״̬λ
        bool   isFlag = false;

	if(myNum::x % 2 == 0)
	{
		//�ı�״̬λ��ֵ��ʹ��Ϊfalse
        isOdd=0;
	}
	else
	{
	    //�ı�״̬λ��ֵ��ʹ��Ϊtrue
        isOdd=2;
	}
    // �ж�״̬λ��ֵ
	if(isOdd)
	{
		// ���״̬λ��ֵΪtrue�����ӡ����x������
        cout<<"����x������";
	}
	else
	{
        // ���״̬λ��ֵΪfalse�����ӡ����x��ż��
		cout<<"����x��ż��";
	}
	return 0;
}
