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
        //�����ַ����ĳ���
        length=input_str.size();
        //�����ַ������������־ͼ�1
        for(int j=0; j<length; j++)
        {
            if(input_str[j]>='0'&&input_str[j]<='9')
                digital_num++;
        }
        cout<<digital_num<<endl;
        //����
        digital_num=0;
    }
    return 0;
}
