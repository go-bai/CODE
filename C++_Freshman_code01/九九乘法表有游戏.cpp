#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int a;
    int b;
    int product;
    int num;
    for(;;)
    {
        a=rand()%9+1;
        b=rand()%9+1;
        product=a*b;
        cout<<a<<"*"<<b<<"=";
        cin>>num;
        if(num!=product)
        {
            cout<<"不对，请再试一次"<<endl;
            for(;;)
            {
                cout<<a<<"*"<<b<<"=";
                cin>>num;
                if(num!=product)
                {
                    cout<<"不对，请再试一次"<<endl;
                }
                else
                    break;
            }
        }
        else
            cout<<"非常好"<<endl;
    }
}
