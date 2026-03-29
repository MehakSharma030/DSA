#include<iostream>
using namespace std;

int hcf(int a,int b){
    if(a == 0){
        return b;
    }

    if(b == 0){
        return a;
    }

    while(a != b){

        if(a > b){
            a=a-b;
        }
        else{
            //b > a
            b=b-a;
        }

    }
    return a;
}

int main(){
    int num1,num2;
    cout<<"Enter any two numbers : " ;
    cin>>num1>>num2;
    int ans=hcf(num1,num2);
    cout<<"The greatest common factor of the two numbers is  : "<ans;

    return 0;
}