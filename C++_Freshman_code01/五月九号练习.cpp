//指针练习
//count *a,b;在这a是一个纸箱int类型的指针,而b只是一个int类型的变量
//&和*互为反运算，在同时使用时，他们“相互抵消”;即*&a=&*a;
//可以用指针参数安引用传递计算一个变量值的立方
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
