#include<iostream>
using namespace std;

void printArr(int arr[],int size,int start=0){
    for(int i=start;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"printint array  : ";
    printArr(arr,10);
    cout<<endl;

    cout<<"printing array from index 6 : ";
    printArr(arr,10,6);
    cout<<endl;
    return 0;
}