#include<iostream>
using namespace std;

int power(int num , int pow){

    if(pow == 0){
        return 1;
    }

    return num * power(num , pow-1);

}

int POWER(int num , int pow){

    if(pow == 0){
        return 1;
    }

    if(pow == 1){
        return num;
    }

    int ans= POWER(num , pow/2);

    if(pow % 2 == 0){
        return ans * ans;
    }

    else{
        return num * ans * ans;
    }

}

int main(){

    int num=2;
    int pow=5;

    int res=power(num , pow);
    cout<<endl<<num<<" raised to power "<<pow<<" is -> "<<res<<endl;

    int result=POWER(num , pow);
    cout<<endl<<num<<" raised to power "<<pow<<" is -> "<<result<<endl;


    return 0;

}