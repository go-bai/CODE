#include<iostream>
using namespace std;
int main()
{
    double lmin=2.00;
    double ladd=0.50;
    double lmax=10.0;
    int a[3],i=1;
    double hours=0,charge=0;
    for(int b=1;b<=3;b++)
    {
        cin>>a[b-1];
    }
    double sum;
    cout<<"Car\t"<<"Hours\t"<<"Charge\t"<<endl;
    while(i<=3)
    {
        if(a[i-1]<=3)
           sum=lmin;
        else
            sum=lmin+(a[i-1]-3)*ladd;
        cout<<i<<"\t"<<a[i-1]<<"\t"<<sum<<endl;
        hours+=a[i-1];
        charge+=sum;
        i++;
    }
    cout<<"TOTAL"<<"\t"<<hours<<"\t"<<charge<<endl;

}

