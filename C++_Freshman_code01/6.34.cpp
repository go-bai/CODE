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
        cout<<"����"<<endl;
    else
        cout<<"����"<<endl;
    cout<<i<<endl;
    for(int j=1; j<=100; j++)
    {
        i=(0+rand()%2);
        if(i)
            z++;
        else
            f++;
    }
    cout<<"����:"<<z<<"�Σ�"<<"����:"<<f<<"�Ρ�"<<endl;
}

int main()
{

    flip();

}
