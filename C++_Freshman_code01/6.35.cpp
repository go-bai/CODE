#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    int a,b,c,product;
    for(;;)
    {
        srand(time(NULL));
        a=rand()%9+1;
        b=rand()%9+1;
        product=a*b;
        cout<<a<<"*"<<b<<"=";
        cin>>c;
        if(c!= product)
        {
            cout<<"���ԣ�������һ��"<<endl;
            for(;;)
            {
                cout<<a<<"*"<<b<<"=";
                cin>>c;
                if(c!= product)
                    cout<<"���ԣ�������һ��"<<endl;
                else
                {
                    cout<<"�ǳ���"<<endl;
                    break;
                }
            }
        }
        else cout<<"�ǳ���"<<endl;
    }
}
