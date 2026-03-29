#include<iostream>
using namespace std;

int setBits(){
    int a,b;
    cout<<"Enter two numbers :";
    cin>>a>>b;
    int count1=0,count2=0;
    while (a != 0){
        int ans=a&1;
        if(ans == 1){
            count1++;
        }
        a=a>>1;
    }

    while (b != 0){
        int ans=b&1;
        if(ans == 1){
            count2++;
        }
        b=b>>1;
    }
    int res=count1+count2;
    return res;
}

int main(){
    int val=setBits();
    cout<<"number of set bits in the two numbers are : "<<val<<endl;
    return 0;
}