#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, m, b, c;

    while (cin>>n>>m)
    {
        b = 2;
        c = 0;
        for (i = 0 ; i < n / m ; i++)
        {
            printf(c++ ? " %d" : "%d", b + m - 1);
            b += m * 2;
        }
        printf(n % m ? " %d\n" : "\n", b + n % m - 1);
    }

    return 0;
}
