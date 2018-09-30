#include<iostream>
using namespace std;
int main() {
    int n,r;
    //cin>>n>>r;
    while(cin>>n>>r) {
        if(n<0) {
            n=-n;
            string nn="";
            while(n>0) {
                int temp=n%r;
                if(temp<10) {
                    nn=char('0'+temp)+nn;
                } else {
                    nn=char('A'-10+temp)+nn;
                }
                n/=r;
            }
            nn='-'+nn;
            cout<<nn<<endl;

        } else {
            string nn="";
            while(n>0) {
                int temp=n%r;
                if(temp<10) {
                    nn=char('0'+temp)+nn;
                } else {
                    nn=char('A'-10+temp)+nn;
                }
                n/=r;
            }
            cout<<nn<<endl;

        }
    }


}
