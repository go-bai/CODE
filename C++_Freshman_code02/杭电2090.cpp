#include<cstdio>
using namespace std;
int main()
{
    double lcount,price;
    char name[20];
    double sum=0;
    while(scanf("%s%lf%lf",name,&lcount,&price)!=EOF)
    {
        sum+=lcount*price;
    }
    printf("%.1lf\n",sum);


}
