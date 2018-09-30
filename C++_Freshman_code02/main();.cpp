#include<iostream>
using namespace std;
int main()
{
   //static int a = 5;
   static int a=5;
   cout<<a<<endl;
   if(--a>0)
       main();
   return 0;
}
