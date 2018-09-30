#include <iostream>

using namespace std;

int main()
{
    int n,min,temp,j;
    while (cin>>n&&n!=0)
    {
        int *p= new int[n];//定义指针并指向用new动态分配大小为n的空间
        for (int i=0;i<n;i++)
        {
            cin>>p[i];
            if (i==0)
            {
                min=p[0];
                j=0;
            }
            else
            {
                if (p[i]<min)
                {
                    min=p[i];
                    j=i;
                }
            }

        }
        temp=p[0];
        p[0]=min;
        p[j]=temp;
        for (int i=0;i<n;i++)
        {
            if (i!=0)
            {
                cout<<" ";//数与数之间用空格分开
            }
            cout<<p[i];
        }
        cout<<endl;
        delete p;//记着delete释放空间
    }
    return 0;
}
