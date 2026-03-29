#include<iostream>
using namespace std;

int main(){

    int num=10;
    cout<<"Value of number is :"<<num<<endl;

    cout<<endl;

    // declaring pointer and accessing adress and value
    int *ptr=&num;
    cout<<"Adress of number  is : "<<ptr<<endl;
    cout<<"value of number is before increase is  : "<<*ptr<<endl;

    //another way of declaring pointer 
    int j=1;
    int *pt=0;
    pt=&j;

    // increasing value using pointer
    (*ptr)++;
    cout<<"value of number after increase is   : "<<*ptr<<endl;

    cout<<endl;

    //copying a pointer
    int num1=100;
    int *ptr1=&num1;
    int *ptr2=ptr1;
    cout<<"after copying data : "<<endl;
    cout<<"adress of pointer 1 : "<<ptr1<<endl;
    cout<<"Adress of pointer 2 : "<<ptr2<<endl;
    cout<<"Value at pointer 1 : "<<*ptr1<<endl;
    cout<<"Value at pointer 2 : "<<*ptr2<<endl;

    cout<<endl;

    //important note 
    int i=3;
    int *p=&i;
    cout<<"value of p is : "<<(*p)++<<endl;
    cout<<"Value of p after increase is : "<<*p<<endl;
    *p=*p+1;
    cout<<"Value of p after increse is : "<<*p<<endl;
    cout<<"adress inside p before increasing by 1 : "<<p<<endl;
    p=p+1;
    cout<<"adress inside p after increasing by 1 : "<<p<<endl;
    
    return 0;
}

