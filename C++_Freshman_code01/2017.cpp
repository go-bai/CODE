#include <iostream>
#include<string>
using namespace std;

int main()
{
    int n,digital_num=0,length;
    string input_str;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>input_str;
        //计算字符串的长度
        length=input_str.size();
        //遍历字符串。碰到数字就加1
        for(int j=0; j<length; j++)
        {
            if(input_str[j]>='0'&&input_str[j]<='9')
                digital_num++;
        }
        cout<<digital_num<<endl;
        //清零
        digital_num=0;
    }
    return 0;
}
