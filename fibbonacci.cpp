#include<iostream>
using namespace std;

void fibbonacci(){
    int n;
    cout<<"Enter the number of term :";
    cin>>n;
    int a=0;
    int b=1;
    int i=2;
    
    while(i <= n){
        int c=a+b;
        a=b;
        b=c;
        i++;
    }
    cout<<"Value of "<<n<<"th term is :"<<b<<endl;
}
int main(){
    fibbonacci();

    return 0;
}