#include<iostream>
using namespace std;

inline int getMax(int &n1,int &n2){
    return ((n1 > n2)? n1 : n2);
}

int main(){

    int num1=5;
    int num2=6;
    int ans=getMax(num1,num2);
    cout<<"the maximum of two numbers "<<num1<<" and "<<num2<<" is : "<< ans;

    cout<<endl;

    num1+=4;
    num2+=1;
    int ans2=getMax(num1,num2);
    cout<<"the maximum of two numbers "<<num1<<" and "<<num2<<" is : "<< ans2;

    return 0;
}