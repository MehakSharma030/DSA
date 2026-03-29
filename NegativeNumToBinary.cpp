#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number :";
    cin>>num;
    int number=num;
    int val=0;
    while(num != 0){
        val=(val<<1) | 1;
        num=(num>>1);
    }
    int ans;
    ans=(~number) & val;
    cout<<"Binary Equivalent :"<<ans<<endl;
    return 0;
}