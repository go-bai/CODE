//肯定第一个测试数据是3，
#include<iostream>
#include<cmath>
using namespace std;
int text(int num)
{
    for(int i=2; i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{

    int num;
    while(cin>>num&&num!=0)
    {
        int lcount=0;
        for(int i=3; i<num/2; i++)
        {
            if(text(i)&&text(num-i))
                lcount++;
        }
        cout<<lcount<<endl;
    }


}
