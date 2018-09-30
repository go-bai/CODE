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
            cout<<"不对，请再试一次"<<endl;
            for(;;)
            {
                cout<<a<<"*"<<b<<"=";
                cin>>c;
                if(c!= product)
                    cout<<"不对，请再试一次"<<endl;
                else
                {
                    cout<<"非常好"<<endl;
                    break;
                }
            }
        }
        else cout<<"非常好"<<endl;
    }
}
