#include <iomanip>
#include<iostream>
using namespace std;
int main()
{
    double sum;
    int m,n,i;
    cin>>m;
    while ( m-- )
    {
        cin>>n;
        sum = 0;
        for ( i=1.0; i<=n; i++ )
        {
            if ( i%2==1 )
            {
                sum += (1.0)/i;
            }
            else
            {
                sum += (-1.0)/i;
            }

        }


        cout<<fixed<<setprecision(2)<<sum<<endl;
    }
    return 0;
}
