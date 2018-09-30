#include<iostream>
#include<cmath>
using namespace std;
int text(int num)//测试素数
{
    int lcount=0;
    for(int i=2;i<=sqrt(num);i++)
    {
        if(num%i==0)
                lcount++;

    }
    return lcount;
}


int main()
{
    int num;
    cin>>num;
    if(text(num))
        cout<<"不是素数"<<endl;
    else
        cout<<"是素数"<<endl;

        //b
    for(int i=2;i<=10000;i++)
    {
        if(!text(i))
            cout<<i<<endl;
    }
    //c没必要写了吧

}
