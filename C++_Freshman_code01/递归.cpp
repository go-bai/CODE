#include <iostream>
using namespace std;
int n = 0;

void swap(char *q ,char *p)
{   //交换函数
    int temp;
    temp= *q;
    *q = *p;
    *p = temp;
}

void perm(char arr[],int k, int m )
{
    int i;
    if(k >m)
    {
        for(i = 0 ; i <= m ; i++)
        {  //递归结束出口，当数列只剩下一个数的时候输出
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }
    else
    {
        for(i = k ; i <=m;i++)
        {  //递归部分
            swap(arr[k],arr[i]);
            perm(arr,k+1,m);
            /*把数组看成1｛234｝+2｛134｝+3｛124｝+4｛123｝
            再把｛234｝看成2｛34｝+3｛24｝+4｛23｝
            一直把整体化为部分，一直把大问题分解成小问题。*/
            swap(arr[k],arr[i]);
        }
    }
}

int main()
{
    char arr[] ="1234";
    perm(arr,0,3);
    return 0;
}
