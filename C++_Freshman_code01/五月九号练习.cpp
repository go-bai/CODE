//ָ����ϰ
//count *a,b;����a��һ��ֽ��int���͵�ָ��,��bֻ��һ��int���͵ı���
//&��*��Ϊ�����㣬��ͬʱʹ��ʱ�����ǡ��໥������;��*&a=&*a;
//������ָ����������ô��ݼ���һ������ֵ������
//
#include<iostream>
using namespace std;
int cubeByValue(int *n);
int main()
{
    int number=5;
    cout<<"the original values of number is "<<number<<endl;
    number=cubeByValue(&number);
    cout<<"the new      values of number is "<<number;
    return 0;

}
int cubeByValue(int *n)
{
    return *n**n**n;
}
