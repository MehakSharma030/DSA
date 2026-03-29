#include<iostream>
using namespace std;
void reverse(int arr[],int size){

    int start=0;
    int end=size-1;
    while(start <= end){
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        
        start++;
        end--;

    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter size of array : ";
    cin>>size;

    cout<<"Enter array elements :";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<endl;

    cout<<"the original array is : ";
    printArray(arr,size);
    cout<<endl;

    cout<<"the reversed array is : ";
    reverse(arr,size);
    printArray(arr,size);

    return 0;
}