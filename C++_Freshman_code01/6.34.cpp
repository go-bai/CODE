#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int flip(void)
{
    int z=0,f=0;
    srand(time(0));
    int i=(0+rand()%2);
    if(i)
        cout<<"正面"<<endl;
    else
        cout<<"反面"<<endl;
    cout<<i<<endl;
    for(int j=1; j<=100; j++)
    {
        i=(0+rand()%2);
        if(i)
            z++;
        else
            f++;
    }
    cout<<"正面:"<<z<<"次，"<<"反面:"<<f<<"次。"<<endl;
}

int main()
{

    flip();

}
