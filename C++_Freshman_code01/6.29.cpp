#include<iostream>
using namespace std;
int perfect(int num)
{
    int sum=1;
    for(int i=2; i<num; i++)
    {
        for(int j=i+1; j<num; j++)
        {
            if(i*j==num)
                sum+=(i+j);
        }
    }
    return sum;

}
int main()
{
    int num;
    for(num=2; num<=1000; num++)
    {
        if(num==perfect(num))
            cout<<num<<endl;
    }

}
