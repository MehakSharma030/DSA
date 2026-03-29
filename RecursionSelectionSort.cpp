#include<iostream>
using namespace std;

void SelectionSort(int *arr , int size){

    if(size == 0 || size == 1){
        return ;
    }

    int min_index=0;
    for(int i=0;i<size;i++){
        if( arr[i] < arr[min_index] ){
            min_index=i;
        }
    }
    if(min_index != 0){
        swap( arr[0] , arr[min_index] );
    }

    SelectionSort(arr+1 , size-1);

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

    SelectionSort(arr,size);

    cout<<"Sorted Array -> ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}