#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
    srand(time(0));
    int n=rand()%1000;
    int lbreak=0,lcount=0;
    cout<<"I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n";
    while(true)
    {
        if(lbreak)
            break;
        int n=rand()%1000;
        int num;
        cin>>num;
        lcount++;
        if(n==num)
        {
            if(lcount<10)
                cout<<"lucky!";
            else if(lcount==10)
                cout<<"secret!";
            else if(lcount>10)
                cout<<"you should be able to do better!";
            break;
        }

        else
        {
            while(true)
            {
                if(num>n)
                    cout<<"����,����һ��"<<endl;
                else
                    cout<<"С��,����һ��"<<endl;
                cin>>num;
                lcount++;
                if(n==num)
                {
                    if(lcount<10)
                        cout<<"lucky!";
                    else if(lcount==10)
                        cout<<"secret!";
                    else if(lcount>10)
                        cout<<"you should be able to do better!";
                    cout<<"��ȷ";
                    break;
                }

            }
        }
    }
}
