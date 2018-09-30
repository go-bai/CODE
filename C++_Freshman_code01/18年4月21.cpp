
//º«ÐÅµã±ø
#include<iostream>
using namespace std;
int main()
{
    int a[3];
    int n;
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    for(int i=11;i<100;i++)
    {
        if(i%3==a[0]&&i%5==a[1]&&i%7==a[2])
            cout<<i<<endl;
    }
}
/*
#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
  {
        int *p=new int(20);
        cout<<*p;

        system("pause");
        return 0;

  }
*/
