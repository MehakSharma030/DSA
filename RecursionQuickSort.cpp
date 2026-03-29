#include<iostream>
using namespace std;

int partition(int * arr , int s , int e){

    int count=0;

    // let pivot is the starting index
    int pivot=arr[s];

    for(int i=s+1;i<=e;i++){

        if(arr[i] < pivot){
            count++;
        }

    }

    int pivotIndex=s+count;
    
    // placing the pivot at its right place
    swap(arr[s] , arr[pivotIndex]);

    // chcking for right nd left halves
    int i=s;
    int j=e;

    while(i < pivotIndex && j > pivotIndex){

        // if arr[i] is at the right place
        while(arr[i] < pivot && arr[i] < arr[pivotIndex]){
            i++;
        }

        // if arr[j] is at the right place
        while(arr[j] > pivot && arr[j] > arr[pivotIndex]){
            j--;
        }

        // if both are not at their appropriate places
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i] , arr[j]);
            i++;
            j--;
        }

    }
    return pivotIndex;

}

void quickSort(int *arr , int s , int e){

    if(s >= e){
        return ;
    }

    // partitioning the array at a point called pivot
    int pivotIndex=partition(arr , s , e);

    // sorting the left nd right subhalves
    quickSort( arr , s , pivotIndex-1);

    quickSort( arr , pivotIndex+1 , e);

}

int main(){

    int arr[]={23 , 69, 40 , 51 , 85 , 93 , 39 , 71};
    int n=8;

    cout<<endl<<"Original array -> ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    quickSort(arr , 0 , n-1);

     cout<<endl<<"Sorted array -> ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
}