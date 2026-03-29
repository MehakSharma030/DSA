#include<iostream> 
using namespace std;

void merge(int arr1[],int size1,int arr2[],int size2,int arr3[]){
    int i=0;
    int j=0;
    int k=0;
    while(i<size1 && j<size2){
        if(arr1[i] <= arr2[j]){
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else{
            // arr1[i] > arr2[j]
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    }

    while(i<size1){
        arr3[k]=arr1[i];
        i++;
        k++;
    }

    while(j<size2){
        arr3[k]=arr2[j];
        j++;
        k++;
    }

}
void printArr(int arr[]){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr1[4]={10,7,5,15};
    int arr2[4]={2,50,30,1};

    int arr3[8];
    merge(arr1,4,arr2,4,arr3);
    printArr(arr3);
    return 0;
}