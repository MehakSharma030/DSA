#include<iostream>
using namespace std;

void swap(int arr[],int size){
    for(int i=0;i<size;i=i+2){
        if((i+1) >= size){
            break;
        }
        int temp=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=temp;
    }
}

void printAraay(int arr[],int size){
    for (int i = 0; i < size; i++){
        cout<<arr[i]<<" ";
    }
    
    
}
int main(){
    int arr[100];
    int size;
    cout<<"enter array size : ";
    cin>>size;
    cout<<endl;

    cout<<"Enter array elements : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;
    
    cout<<"the original array is :";
    printAraay(arr,size);
    cout<<endl;
    
    cout<<"Swapped array  :";
    swap(arr,size);
    printAraay(arr,size);
    cout<<endl;

    return 0;
}