#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int num;
    cout<<"Enter  a number : ";
    cin>>num;
    // take float as answer varible bcs power works well with float
    float bin=0; 
    int i=0;
    
    while(num != 0){
        int bit=num & 1;
        bin=(bit * (pow(10,i)) ) + bin;
        num=num>>1;
        i++;
    }
    cout<<"Binary Equivalent is :"<<bin;
    return 0;
}