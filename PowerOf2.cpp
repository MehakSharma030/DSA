#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter any number to check :";
    cin>>num;
    int val=num;
    int count=0;
    while(num != 0){
        int bit=num & 1;
        if(bit == 1){
            count++;
        }
        if(count > 1){
            break;
        }
        num=num>>1;
    }
    if(count == 1){
        cout<<"Yes the number "<<val<<" is a power of 2"<<endl;
    }
    else{
        cout<<"No the number "<<val<<" is not s power of 2"<<endl;
    }
    return 0;
}