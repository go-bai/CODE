#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m,n;
    unsigned int a, b, c;
    while(cin>>m>>n)
    {
        int flag=0;
        int k=0;
        for(int i =m; i<= n; i++ )
        {
            a = i/100;
            b = (i-a*100)/10;
            c = i- a*100-b*10;

            if(i == a*a*a+b*b*b+c*c*c)
            {
                if(flag==0)
                {
                    cout<<i;
                    flag=1;
                }

                else
                    cout<<" "<<i;
            }

            else if(i != a*a*a+b*b*b+c*c*c)
            {
                k++;
                if(k==(n-m+1))
                    cout<<"no";
            }
        }
        cout<<endl;
    }
    return 0;
}
/*
#include <iostream>
using namespace std;
int main()
{
    int m,n,temp;
    while(cin>>m>>n)
    {
        int no=0;
        for(temp=m; temp<=n; temp++)
        {
            int sum=0,i=temp;
            while(i)
            {
                int j;
                j=i%10;
                sum+=j*j*j;
                i/=10;
            }
            if(sum==temp)
            {
                if(no>0)
                    cout<<" ";
                cout<<temp;
                no++;
            }
        }
        if(no==0)
            cout<<"no";
        cout<<endl;
    }
}

*/
