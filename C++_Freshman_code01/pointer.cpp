#include <iostream>
#include <stdlib.h>
using namespace std;
    namespace     myNum          //填写命名空间的关键字
{
    int x = 105;
}
int main(int isOdd)
{
    // 使用bool类型定义isOdd，作为状态位
        bool   isFlag = false;

	if(myNum::x % 2 == 0)
	{
		//改变状态位的值，使其为false
        isOdd=0;
	}
	else
	{
	    //改变状态位的值，使其为true
        isOdd=2;
	}
    // 判断状态位的值
	if(isOdd)
	{
		// 如果状态位的值为true，则打印变量x是奇数
        cout<<"变量x是奇数";
	}
	else
	{
        // 如果状态位的值为false，则打印变量x是偶数
		cout<<"变量x是偶数";
	}
	return 0;
}
