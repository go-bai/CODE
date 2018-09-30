# include <iostream>
# include <cstdlib>
# include <ctime>
using namespace std;
int c();
int main()
{
    srand(time(0));
    int guess=0;
    int flag=0;
    int pingyu=0;
    int acount=0;
    int zhengque=0;
    while(true)
    {
        cout<<c<<endl;
        cin>>guess;
        acount=1;
        zhengque=0;
        for(;;)
        {
            if(flag==1)
            {
                cin>>guess;
                flag=0;
                acount++;
            }
            cout<<c<<endl;
            if(guess==c())
            {
                pingyu=(1+rand()%4);
                if(pingyu==1)
                {
                    cout<<"Very good!"<<endl;
                }
                else if(pingyu==2)
                {
                    cout<<"Excellent!"<<endl;
                }
                else if(pingyu==3)
                {
                    cout<<"Nice work!"<<endl;
                }
                else
                {
                    cout<<"Keep up the good work!"<<endl;
                }
                zhengque++;
                break;
            }
            else
            {
                pingyu=(1+rand()%4);
                if(pingyu==1)
                {
                    cout<<"No. please try again."<<endl;
                }
                else if(pingyu==2)
                {
                    cout<<"Wrong. Try once more."<<endl;
                }
                else if(pingyu==3)
                {
                    cout<<"Don't give up!"<<endl;
                }
                else
                {
                    cout<<"No. Keep trying"<<endl;
                }
                flag=1;
            }
        }
        if(acount==10)
        {
            break;
        }
    }
    double k=0;
    k=zhengque*1.0/acount*100;
    if(k<=75)
    {
        cout<<"Please ask your instructor for extra help"<<endl;
    }
    return 0;
}
int c()
{
    int a=0,b=0;
    a=(1+rand()%9);
    b=(1+rand()%9);
    return a*b;
}
