#include<iostream>
using namespace std;
int main()//����ͬ��
{
    double a,b;//�ֱ���������ӵ�����
    int n,m;
    while(cin>>n>>m)
    {
        a=2*n-m/2;
        b=m/2-n;
        if(a<0||b<0||m%2==1)
            cout<<"No answer"<<endl;
        else
            cout<<a<<" "<<b<<endl;
    }
        return 0;
}


/*
int a=520;
    int b=a/100+a/10%10*10+a%10;
    cout<<b;
const double pi=acos(-1.0);
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
    int a=3;
    double b=0.1;
    cout<<a-b;
}

*/
