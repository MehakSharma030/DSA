#include<iostream>
using namespace std;

void InsertionSort(int *arr , int size){

    if(size == 0 || size == 1){
        return ;
    }

    for(int i=1;i<size;i++){

        int j=i-1;
        int temp=arr[i];

        while(j >= 0){

            if(arr[j] > temp){
                arr[j+1]=arr[j];
            }

            else{
                break;
            }
            
            j--;

        }

        arr[j+1]=temp;
    }

    InsertionSort( arr+1 , size-1 );

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

    InsertionSort(arr,size);

    cout<<"Sorted Array -> ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}