#include<iostream>
using namespace std;
int main()
{
    int num;
    int arr[66];
    cin>>num;
    int new_num=num;
    int lcount=0;

    while(new_num>0)
    {
        lcount++;//Î»Êý
        new_num/=10;

    }


    for(int a=0; a<lcount; a++)
    {
        arr[a]=num%10;
        num/=10;
    }




    if(lcount%2==0)
    {
        for(int i=0; i<lcount; i+=2)
            cout<<arr[i];
        cout<<" ";
        for(int j=1; j<lcount; j+=2)
            cout<<arr[j];
    }
    if(lcount%2!=0)
    {
        for(int i=0; i<lcount; i+=2)
            cout<<arr[i];
        cout<<" ";
        for(int j=1; j<lcount; j+=2)
            cout<<arr[j];
    }

}
