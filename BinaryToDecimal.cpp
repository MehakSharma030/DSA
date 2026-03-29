#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter  a binary number : ";
    cin>>num;
   
    float dec=0;
    int i=0;
    while(num!=0){
        int bit=num % 10;
        dec=bit*(pow(2,i))+dec;
        num=num/10;
        i++;
    }
    cout<<"Decimal Equivalent is :"<<dec;
    return 0;
}