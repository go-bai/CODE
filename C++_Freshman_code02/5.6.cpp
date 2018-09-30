#include<iostream>
using namespace std;
int main()
{
    int num;
    int sum=0;
    int count=0;
    for(;;count++)
    {
        cin>>num;
        if(num==9999)
            break;
        sum+=num;

    }
    cout<<sum/count;
}
