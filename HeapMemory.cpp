#include<iostream>
using namespace std;

void getSum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"Sum of array is : "<<sum<<endl;
}

int main(){

    char ch='a';
    char *ptr=new char;

    cout<<endl;
    cout<<"sizeof(num) -> "<<sizeof(ch)<<endl;
    cout<<"sizeof(ptr) -> "<<sizeof(*ptr)<<endl;
    delete ptr;

    cout<<endl;
    int n;
    cout<<"input array size : ";
    cin>>n;

    int *arr=new int[n];
    cout<<"Enter array elements : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    getSum(arr,n);

    delete []arr;
    return 0;
}