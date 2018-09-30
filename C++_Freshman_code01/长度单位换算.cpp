#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int lcount=0;
    int b=1;
    int arr[4]= {-1,-1,-1,-1};
    int larr[4]= {63360,36,12,1};
    string barr[10]= {"mi","yd","ft","in"};
    int a=4;
    while(a--)
    {
        b=num/larr[lcount];
        arr[lcount]=b;
        num-=b*larr[lcount];
        b=1;
        lcount++;
    }
    for(int i=0; i<4; i++)
    {
        if(arr[i]!=0)
            cout<<arr[i]<<" "<<barr[i]<<" ";
    }


}
/*
for(i=0; i<=1000; i++)
    {
        for(j=0; j<1760; j++)
        {
            for(k=0; k<3; k++)
            {
                for(l=0; l<12; l++)
                {
                    if(i*1760*3*12+j*3*12+k*12+l==num)
                    {
                        if(i!=0)
                            cout<<i<<" mi ";
                        if(j!=0)
                            cout<<j<<" yd ";
                        if(k!=0)
                            cout<<k<<" ft ";
                        if(l!=0)
                            cout<<l<<" in ";
                        break;

                    }

                }
            }
        }
    }

    */
