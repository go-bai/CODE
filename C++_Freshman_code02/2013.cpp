#include <iostream>

using namespace std;

int main()
{
    int n,sum=1;
    while(cin>>n&&n>1)
    {
        while(n>=2)
        {

            sum=(sum+1)*2;
            n--;
        }
        cout << sum << endl;
        sum=1;
    }

    return 0;
}
