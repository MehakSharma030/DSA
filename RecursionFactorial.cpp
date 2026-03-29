#include<iostream>
using namespace std;

int fact(int num){
    if(num == 0 ){ 
        return 1;
    }

    return num * fact(num-1);
}

int main(){
    int n;
    cout<<"Enter the number whose factorial you want to find : ";
    cin>>n;
    cout<<"Factorial is  : ";
    int ans=fact(n);
    cout<<ans;
    return 0;
}