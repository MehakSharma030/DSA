#include<iostream>
using namespace std;

void ptr(int *n){
    cout<<"value of n passed to function is  : "<<*n<<endl;
    (*n)++;
    cout<<"value of n after increasing , in the function : "<<*n<<endl;
}

void print_Arr(int *arr,int size){
    cout<<"Array elements are : ";
    for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
}

void getSum(int *arr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"sum of array is : "<<sum<<endl;
}

int main(){
    int num=5;
    ptr(&num);
    cout<<"value of n in main : "<<num<<endl;

    cout<<endl;

    int arr[5]={1,2,3,4,5};
    print_Arr(arr,5);

    cout<<endl;

    getSum(arr,5);

    cout<<endl;

    getSum(arr+2,3);

    return 0;
}