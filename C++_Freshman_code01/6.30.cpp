#include<iostream>
#include<cmath>
using namespace std;
int text(int num)//��������
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
        cout<<"��������"<<endl;
    else
        cout<<"������"<<endl;

        //b
    for(int i=2;i<=10000;i++)
    {
        if(!text(i))
            cout<<i<<endl;
    }
    //cû��Ҫд�˰�

}
