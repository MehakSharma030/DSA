#include<iostream>
using namespace std;

void update(int **p){
    **p=**p+1;
    cout<<"inside fucntion : "<<**p<<endl;
}

int main(){

    int num=5;
    int *ptr1=&num; // pointer to number
    int **ptr2=&ptr1; // pointer to first pointer
    int ***ptr3=&ptr2; //pointer to second pointer

    cout<<endl;

    cout<<"number -> "<<num<<endl;
    cout<<"*ptr1 -> "<<*ptr1<<endl;
    cout<<"**ptr2 -> "<<**ptr2<<endl;
    cout<<"***ptr3 -> "<<***ptr3<<endl;

    cout<<endl;
    cout<<" adresses : "<<endl;
    cout<<"&num -> "<<&num<<endl;
    cout<<"ptr1 -> "<<ptr1<<endl;
    cout<<"&ptr1 -> "<<&ptr1<<endl;
    cout<<"ptr2 -> "<<ptr2<<endl;
    cout<<"&ptr2 -> "<<&ptr2<<endl;
    cout<<"ptr3 -> "<<ptr3<<endl;
    cout<<"&ptr3 -> "<<&ptr3<<endl;

    cout<<endl;
    int i= 100;
    int *p=&i;
    int **p2=&p;
    cout<<"initial value : "<<i<<endl;
    update(p2);
    cout<<"inside main : "<<**p2<<endl;
    cout<<endl;
    
    return 0;
}