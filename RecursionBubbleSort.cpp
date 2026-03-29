#include<iostream>
using namespace std;

void BubbleSort(int *arr , int size){

    if( size == 0 || size == 1 ){
        return;
    }

    for(int i=0;i<size-1;i++){
        if(arr[i] > arr[i+1])
            swap( arr[i] , arr[i+1] );
    }

    BubbleSort(arr , size-1);

}

int main(){

    int arr[10]={39,25,1,79,94,62,78,15,90,60};
    int size=10;

    cout<<endl;

    cout<<"Original Array -> ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    cout<<endl;

    BubbleSort(arr,size);

    cout<<"Sorted Array -> ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}