#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n,num;
    cin>>n;
    int arr[100];
    while(n--) {
        cin>>num;
        for(int i=0; i<num; i++) {
            cin>>arr[i];
        }
        sort(arr,arr+num);
        for(int i=arr[num-1];i<1000000;i++) {
            int flag=0;
            int j;
            for(j=0; j<num; j++) {
                if(i%arr[j]!=0) {
                    flag=1;
                    break;
                }
            }
            if(flag==0) {
                cout<<i<<endl;
                break;
            }
        }
    }
}
