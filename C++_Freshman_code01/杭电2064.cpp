
#include <cstdio>
int main()
{
    int n;
    __int64 hanoi[40];
    hanoi[1] = 2;
    for (int i = 2 ; i <= 35 ; i++)
        hanoi[i] = hanoi[i-1] * 3 + 2;
    while (~scanf ("%d",&n))
        printf ("%I64d\n",hanoi[n]);
    return 0;
}
/*
#include <cmath>
#include <cstdio>
#include<iostream>
using namespace std;
int main(void)
{
    int n;
    while (cin>>n&&n!=EOF)
        cout<<pow(3, n) - 1<<endl;
    return 0;
}
Ëã·¨ÓÅ»¯
f(n) = 3 ¡Á f(n-1) + 2
f(1) = 2

=>

f(n) + 1 = 3 ¡Á [f(n-1) + 1]
f(1) + 1 = 2 + 1 = 3
=>
f(n) + 1 = 3n
=>
f(n) = 3n - 1
*/
